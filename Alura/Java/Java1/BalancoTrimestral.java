public class BalancoTrimestral {
	public static void main(String[]args){
		
		int gastosJaneiro = 15000;

		int gastosFevereiro = 23000;

		int gastosMarco = 17000;
		
		int gastosTrimestre = gastosJaneiro + gastosFevereiro + gastosMarco;

			System.out.println("Os gastos do trimestre somaram " + gastosTrimestre );

		int mediaTrimestral = ((gastosJaneiro + gastosFevereiro + gastosMarco) / 3);
		
			System.out.println("A média dos gastos foi de " + mediaTrimestral + " por mês");	
	}
}
