# Teste-Locadora
Aplicação Desktop de uma locadora, em c++ utilizando Windows Forms para Soitic.
 
O arquivo locadora.sql inclui a estrutura base do banco de dados bem como a popula com dados, facilitando os testes
do aplicativo.
 
Compilação dever ser feita no Visual Studio, porem, em versões mais recentes c++/clr foi 
descontinuado, para se compilar a aplicação nessas versões se faz necessario a edição de algumas
 propiedades do projeto:  
* Linker->Advanced->Entry Point: Deve ter seu valor editado para "Main";  
* Linker->System->SubSystem : Dever ser "Windows (/SUBSYSTEM:WINDOWS)";  


Ademais, sobre dependencias, a unica existente é o Mysql como banco de dados, e sua biblioteca
MySql::Data::MySqlClient;  

Ao compilar o codigo será exibido o form principal onde é possível observar:
 
### MYFORM
![Principal](Teste2/Imagens/Principal.PNG)
* Datagrid listando todos os filmes ou diretores, de acordo com a opção selecionada na caixa de "listagem"
 A edição e remoção de itens pode ser feito utilizando as opções à esquerda da listagem.
 
* Group box para a inserção de novos diretores.
 
* Group box que permite a inserção de novos filmes, bem como o vínculo ao um diretor pré-existente.
 
* Botão **Recarregar** permite a atualização dos dados na datagrid;
 
* Menu **Item Pesquisar** para busca à base de dados.            
 
 
### PESQUISAR  
![Principal](Teste2/Imagens/Pesquisa.PNG)  
Acessível através do menu **pesquisar** no form principal.
 
* Datagrid mostrando os resultados da pesquisa, com opção de editar ou remover itens através das opções à esquerda da
 listagem.
 
* Textbox para pesquisa através de ID ou nome. Pode-se utilizar o caracter '%' como wildcard durante a pesquisa.
  Ex:
  Para buscar o filme 'pulp fiction', pode-se utilizar qualquer um dos termos listados abaixo:
  ```
    pulp fiction
    pulp%  
  ```  
 
* Groupbox com radiobuttons para definir para definir o objeto da pesquisa.
 
* Groupbox com radiobuttons para definir por qual atributo o objeto será pesquisado, nome/titulo ou id;
 
* Checkbox que permite modificar os resultados de busca por diretor, mostrando também os filmes vinculados ao diretor
pesquisado.
 
O resultado da pesquisa será apresentado como um datagrid.
 
### ALTERAR_FILME  
 ![Principal](Teste2/Imagens/Altera_Filme.PNG)    
Formulario para edição dos dados de um filme, acessível através do formulário principal ou pelo formulário
de pesquisa. Carrega as informações do filme selecionado nos devidos campos, permitindo sua edição e subsequente
persistência através da opção **Alterar**. Após a edição, o usuário será redirecionado ao formulário principal.
 
### ALTERAR_DIRETOR  
 ![Principal](Teste2/Imagens/Alterar_Diretor.PNG)        
Formulario para edição dos dados de um diretor, acessível através do formulário principal ou pelo formulário
de pesquisa. Carrega as informações do diretor selecionado nos devidos campos, permitindo sua edição e subsequente
persistência através da opção **Alterar**. Após a edição, o usuário será redirecionado ao formulário principal.
