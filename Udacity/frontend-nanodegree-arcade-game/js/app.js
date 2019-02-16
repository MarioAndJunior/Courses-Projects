class GameUtils {
    constructor() {
        this.level = 1;
        this.elementHideTime = [500, 750, 1000, 2000, 3000, 4000, 5000];
        this.elementShowTime = [5000, 10000, 20000, 30000];
    }

    incrementLevel() {
        if(this.level <= 3) {
            this.level++;
            document.getElementById("levelSpan").innerHTML = this.level.toString();
        }
    }
    restoreLevel() {
        this.level = 1;
    }

    randomElmtShow(elmtArray) {
       let self = this;
        let lastElmt = elmtArray[elmtArray.length -1];
        for (const elmt of elmtArray) {
            setTimeout(function() {
                elmt.setRandomPosition();
                if(elmt === lastElmt) {
                    self.randomElmtShow(elmtArray);
                }
            }, this.elementShowTime[Math.floor(Math.random() * this.elementShowTime.length)]);
        }
    }

    randomElmtHide(elmtArray) {
        for (const elmt of elmtArray) {
            setTimeout(function() {
                elmt.x = elmt.initialPositionX;
                elmt.y = elmt.initialPositionY;
            }, this.elementHideTime[Math.floor(Math.random() * this.elementHideTime.length)]);
        }
    }
    update() {
        if(player.lifes === 0) {
            this.gameOver();
        }
        if(this.level > 3) {
            this.gameWinner();
            this.restoreLevel();
        }
    }

    gameStart() {
        let initialGameDiv = document.getElementById("introScreen");
        initialGameDiv.style.display = 'none';
    }

    gameOver() {
        let gameOverDiv = document.getElementById("gameOverScreen");
        gameOverDiv.style.display = 'block';
        this.updatePoints();

    }

    gameWinner() {
        let winnerGameDiv = document.getElementById("winnerScreen");
        winnerGameDiv.style.display = 'block';
        this.updatePoints();
    }

    restartGame() {
        window.location.reload(true);
    }

    updateLifes() {
        document.getElementById("lifesSpan").innerHTML = player.lifes.toString();
    }

    updatePoints() {
        document.getElementById("pointsSpan").innerHTML = player.points.toString();
        document.getElementById("winnerPointsSpan").innerHTML = player.points.toString();
        document.getElementById("loserPointsSpan").innerHTML = player.points.toString();
    }
}

class Enemy {
    constructor(x, y) {
        this.baseSpeeds = [1, 1.5, 2, 2.5, 3];
        this.sprite = 'images/enemy-bug.png';
        this.x = x;
        this.y = y;
        this.baseSpeed = this.baseSpeeds[Math.floor(Math.random() * this.baseSpeeds.length)];
        this.initialPositionX = x;
        this.initialPositionY = y;
        this.speed = 0;
    }
    checkColision() {
        if((player.x >= this.x -40 && player.x <= this.x + 40) 
            && (player.y >= this.y -40 && player.y <= this.y + 40)) {
            return Boolean(true);
        }

    }
    update(dt) {
        for (const enemy of allEnemies) {
            switch (gameUtils.level) {
                case 1:
                    enemy.speed = enemy.baseSpeed * 100;
                    break;
                case 2:
                    enemy.speed = enemy.baseSpeed * 200;
                    break;
                case 3:
                    enemy.speed = enemy.baseSpeed * 300;
                    break;
            }
            if(enemy.x > 606) {
                enemy.x = this.initialPositionX;
            }
        }
        if(this.checkColision()) {
            player.lifes--;
            player.restoreInitialPosition();
            document.getElementById("lifesSpan").innerHTML = player.lifes.toString();
        }
        this.x = this.x + (this.speed * dt);
    }
    render() {
        ctx.drawImage(Resources.get(this.sprite), this.x, this.y);
    }
}

class Player {
    constructor(x, y, move){
        this.sprite = 'images/char-boy.png';
        this.x = x;
        this.y = y;
        this.initialPositionX = x;
        this.initialPositionY = y;
        this.move = move;
        this.lifes = 5;
        this.points = 0;
    }

    restoreInitialPosition() {
        this.x = this.initialPositionX;
        this.y = this.initialPositionY;
    }

    update() {
        if(this.y > 380) {
            this.y = 380;
        }
        if(this.x > 400) {
            this.x = 400;
        }
        if(this.x < 0) {
            this.x = 0;
        }
        if(this.y < -50) {
            this.restoreInitialPosition();
            gameUtils.incrementLevel();
        }
    }

    render() {
        ctx.drawImage(Resources.get(this.sprite), this.x, this.y);
    }

    handleInput(keyPress) {
        switch(keyPress) {
            case 'left':
                this.x -= this.move + 50;
                break;
            case 'right':
                this.x += this.move + 50;
                break;
            case 'up':
                this.y -= this.move + 30;
                break;
            case 'down':
                this.y += this.move + 30;
                break;
        }
    }
}

class Gem {
    constructor(sprite, x, y, pointsValue) {
        this.xPositions = [0, 101, 201, 303, 403];
        this.yPositions = [-30, 60, 130, 220];
        this.sprite = sprite;
        this.x = x;
        this.y = y;
        this.initialPositionX = this.x;
        this.initialPositionY = this.y;
        this.pointsValue = pointsValue;
    }

    checkColision() {
        if((player.x >= this.x -40 && player.x <= this.x + 40) 
            && (player.y >= this.y -40 && player.y <= this.y + 40)) {
            return Boolean(true);
        }
    }

    update() {
        if(this.checkColision()) {
            this.hide();
            player.points += this.pointsValue;
            gameUtils.updatePoints();
        }
    }

    hide() {
        this.x = -100;
        this.y = -100;
    }

    setRandomPosition() {
        this.x = this.xPositions[Math.floor(Math.random() * this.xPositions.length)];
        this.y = this.yPositions[Math.floor(Math.random() * this.yPositions.length)];
    }

    restoreInitialPosition() {
        this.x = this.initialPositionX;
        this.y = this.initialPositionY;
    }

    render() {
        ctx.drawImage(Resources.get(this.sprite), this.x, this.y);
    }
}

class Life extends Gem {
    constructor(x, y) {
        super(x, y);
        this.sprite = 'images/Heart.png';
    }
    update() {
        if(this.checkColision()) {
            player.lifes++;
            this.restoreInitialPosition();
            gameUtils.updateLifes();
        }
    }
}

// Now instantiate your objects.
// Place all enemy objects in an array called allEnemies
// Place the player object in a variable called player

let gameUtils = new GameUtils();
let allEnemies = [];

//first row enemies
let enemy1 = new Enemy(-50, 60);
let enemy2 = new Enemy(-150, 60);
let enemy3 = new Enemy(-250, 60);
let enemy4 = new Enemy(-350, 60);

//second row enemies
let enemy5 = new Enemy(-100, 140);
let enemy6 = new Enemy(-200, 140);
let enemy7 = new Enemy(-400, 140);
let enemy8 = new Enemy(-800, 140);

//third row enemies
let enemy9 = new Enemy(-50, 230);
let enemy10 = new Enemy(-200, 230);
let enemy11 = new Enemy(-300, 230);
let enemy12 = new Enemy(-450, 230);


allEnemies.push(enemy1);
allEnemies.push(enemy2);
allEnemies.push(enemy3);
allEnemies.push(enemy4);
allEnemies.push(enemy5);
allEnemies.push(enemy6);
allEnemies.push(enemy7);
allEnemies.push(enemy8);
allEnemies.push(enemy9);
allEnemies.push(enemy10);
allEnemies.push(enemy11);
allEnemies.push(enemy12);

let player = new Player(201, 380, 50);

let allRewards = [];

let blueGem = new Gem('images/gem-blue.png', -100, -100, 50);
let greenGem = new Gem('images/gem-green.png', -100, -100, 100);
let orangeGem = new Gem('images/gem-orange.png', -100, -100, 200);
let heart = new Life(-100, -100);

allRewards.push(blueGem);
allRewards.push(greenGem);
allRewards.push(orangeGem);
allRewards.push(heart);

gameUtils.randomElmtShow(allRewards);
gameUtils.randomElmtHide(allRewards);

// This listens for key presses and sends the keys to your
// Player.handleInput() method. You don't need to modify this.
document.addEventListener('keyup', function(e) {
    let allowedKeys = {
        37: 'left',
        38: 'up',
        39: 'right',
        40: 'down',
        65: 'left',
        87: 'up',
        68: 'right',
        83: 'down'
    };

    player.handleInput(allowedKeys[e.keyCode]);
});
