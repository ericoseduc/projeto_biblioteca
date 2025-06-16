package br.com.biblioteca.interfaces;

public interfaces ItemBiblioteca{
    boolean isDisponivel();
    void realizarEmprestimo();
    void realizarDevolucao();
    void exibirInformacoes();
    String getTitulo();
    int getAnoPublicacao();
}