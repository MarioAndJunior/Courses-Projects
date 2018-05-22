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
	private String nome;
	private String RG;
	private String departamento;
	private String funcao;
	private double salario;
	private Data admissao;

	public void setNome(String nome){
		this.nome = nome;
	}
	
	public void setRg(String RG){
		this.RG = RG;
	}
	
	public void setDepartamento(String departamento){
		this.departamento = departamento;
	}

	public void setFuncao(String funcao){
		this.funcao = funcao;
	}
	
	public void setSalario(double salario){
		this.salario = salario;
	}
	
	public void setDataAdmissao(Data admissao){
		this.admissao = admissao;
	}

	public String getNome(){
		return this.nome;
	}

	public String getRg(){
		return this.RG;
	}

	public String getDepartamento(){
		return this.departamento;
	}
	
	public String getFuncao(){
		return this.funcao;
	}
	
	public 
	public double getSalario(){
		return this.salario;
	}	
	void recebeAumento(double porcentagemAumento) {
		this.salario = this.salario * (porcentagemAumento / 100) + this.salario;
	}
	double calculaGanhoAnual() {
		return this.salario * 12;
	}
	void mostra(){
		System.out.println("Nome " + this.getNome());
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
	Funcionario[] numeroFuncionarios;
	int livre = 0;

	void adiciona(Funcionario f){
		this.numeroFuncionarios[this.livre] = f;
		this.livre ++;
	}
}

public class ExercicioFuncionario{
	public static void main(String[]args){
		Funcionario funcionarioUm;
		funcionarioUm = new Funcionario();

		funcionarioUm.nome = "Mario Andrade da Silva Junior";
		funcionarioUm.RG = "99.999.999-9";
		funcionarioUm.departamento = "TI";
		funcionarioUm.funcao = "Desenvolvedor Junior";
		funcionarioUm.salario = 2000.0;
		funcionarioUm.admissao = new Data();
		funcionarioUm.admissao.preencheData(17, 05, 2016);

		funcionarioUm.mostra();	

		Funcionario funcionarioDois = new Funcionario();

		funcionarioDois.nome = 	"Danilo";
		funcionarioDois.salario = 100;

		Funcionario funcionarioTres = funcionarioDois;

		if(funcionarioDois == funcionarioTres) {
			System.out.println("Iguais");
		} else {
			System.out.println("Diferentes");
		}
	}
}


