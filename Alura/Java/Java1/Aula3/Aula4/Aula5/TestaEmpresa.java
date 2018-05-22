class Data{
	int dia;
	int mes;
	int ano;

	void preencheData (int dia, int mes, int ano) {
		this.dia = dia;
		this.mes = mes;
		this.ano = ano;
	}

	String getFormatada(){
		return dia + "/" + mes + "/" + ano;
	}
}

class Funcionario{
	String nome;
	String RG;
	String departamento;
	String funcao;
	double salario;
	Data admissao;

	void recebeAumento(double porcentagemAumento) {
		this.salario = this.salario * (porcentagemAumento / 100) + this.salario;
	}
	double calculaGanhoAnual() {
		return this.salario * 12;
	}
	void mostra(){
		System.out.println("Nome " + this.nome);
		System.out.println("RG "+ this.RG);
		System.out.println("Departamento " + this.departamento);
		System.out.println("Função " + this.funcao);
		System.out.println("Salário R$ " + this.salario);
		System.out.println("Data de Admissão " + this.admissao.getFormatada());

		this.recebeAumento(30);	
		
		System.out.println("Salário Anual R$ " + this.calculaGanhoAnual());
		System.out.println("Salário após aumento R$ " + this.salario);
		}
}

class Empresa{
	String Nome;
	String Cnpj;
	Funcionario[] empregados;
	int livre = 0;

	void adiciona(Funcionario f){
		this.empregados[this.livre] = f;
		this.livre ++;
	}

	void mostraEmpregados() {
		for (int i = 0; i < this.livre; i++){
			System.out.println("Funcionário na posição " + i);
			System.out.println("Tem salário de R$" + this.empregados[i].salario);
		}
	}

	void mostraTodasAsInformacoes() {
		for(int i = 0; i < this.livre; i++){
			System.out.println("Funcionario na posição" + i);
			this.empregados[i].mostra();}
	}

	boolean contem(Funcionario f){
		for(int i = 0; i< this.livre; i++){
			if(f == this.empregados[i]){
				return true;
			}
		}
		return false;
	}
}

public class TestaEmpresa{
	public static void main(String[]args){
		Empresa empresa = new Empresa();
		empresa.empregados = new Funcionario[10];
		Funcionario f1 = new Funcionario();
		f1.nome = "Paulo";		
		f1.salario = 1000;
		f1.admissao = new Data();
		f1.admissao.preencheData(13, 11, 1985);
		empresa.adiciona(f1);

		Funcionario f2 = new Funcionario();
		f2.nome = "João";		
		f2.salario = 1200;
		f2.admissao = new Data();
		f2.admissao.preencheData(28, 07, 1983);
		empresa.adiciona(f2);
		
		empresa.empregados[0].mostra();
		empresa.empregados[1].mostra();

		empresa.mostraEmpregados();
		
		empresa.mostraTodasAsInformacoes();
	
	}
}
