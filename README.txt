# Teste-Locadora
Aplicação Desktop de uma locadora, em c++ utilizando Windows Forms para Soitic.

Foi incluido ao repositorio um scrip Sql, locadora.sql, para criar a base de dados de acordo com os requisitos da aplicação,
ademais, ja popula a base com alguns filmes e diretores, para facilitar os testes no aplicativo.

Ao compilar o codigo será exibido o form principal, nele pode se observar:
###MYFORM###
*Datagrid que lista todos os filmes ou diretores, dependendo de qual opção esta selecionada na caixa de "listagem" logo acima do Datagrid
  As ultimas colunas permitem a alteração ou remoção dos filmes ou diretores;
*Group box de inserção que permite a inserção de novos filmes, digita-se o titulo do filme no textbox, e seleciona-se um diretor para ser vinculado
  ao filme na combobox abaixo, por fim um botão que permite a inserção do filme com os dados colocados/selecionados;
*Group box de inserção que permite a inserção de novos diretores, possui uma textbox para inserção do nome do diretor, e um botão
  logo abaixo para inserir o diretor no banco de dados;
*Botão Recarregar. localizado abaixo do datagrid, permite a atualização dos dados na datagrid;
*MenuItem Pesquisar, logo acima da group box de listagem, abre o form "Pesquisar" quer permite varios tipos de pesquisa no banco
  de dados;
###PESQUISAR###
Este formulario é utilizado para varias opções de pesquisa na base de dados, pode ser acessado ao clicar no item menu pesquisar, 
  no form principal.
 *Datagrid que mostra os resultados da pesquisa realizada, possui botões para alterar e deletar elementos, nas duas ultimas colunas
   de cada linha;
 *Textbox para inserir o nome ou id da pesquisa a ser realizada, pode se utilizar "%" para autocompletar a pesquisa, assim como no
  mysql, Exemplo: para pesquisar o filme pulp fiction, pode ser pesquisar pelo nome completo, ou utilizando pulp%, que tentara
  completar o nome antes do "%";
  *Groupbox com radiobuttons para definir qual objeto sera pesquisado, filmes ou diretores;
  *Groupbox com radiobuttons para definir por qual atributo o objeto será pesquisado, nome/titulo ou por id;
  *Checkbox, mostrar filmes do diretor, que permite modificar os resultados de busca por diretor, quando marcado mostra todos os filmes daquele diretor, quando
    não marcado pesquisa apenas o diretor especifico;
  *Botão Pesquisar, que realiza busca no banco de dados com os parametros e opções selecionados, colocando os resultados no datagrid.
###ALTERAR_FILME###
Formulario que permite a alteração dos dados de um filme, pode ser acessado clicando no botão alterar no datagrid do formulario
  principal ou no formulario Pesquisar.
* Carrega as informações do filme selecionado nos devidos textboxes e permite a edição destes valores;
* Botão Alterar atualiza os dados  do filme de acordo com as textboxes e combobox, retorna ao formulario principal;
###ALTERAR_DIRETOR###
Formulario que permite a alteração dos dados de um diretor, pode ser acessado clicando no botão alterar no datagrid do formulario
  principal ou no formulario Pesquisar.
* Carrega as informações do diretor selecionado nos devidos textboxes e permite a edição destes valores;
* Botão Alterar atualiza os dados do diretor de acordo com as textboxes e combobox, retorna ao formulario principal;
