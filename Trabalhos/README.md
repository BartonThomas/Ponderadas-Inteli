# Ponderada

Faça a implementação da seção 9.5 do Dive into Deep Learning, que é um estudo de caso de tradução automática.

Você deve cumprir os seguintes passos:

No notebook:
- Dowload e pré-processamento do conjunto de dados do Projeto Tatoeba
- Tokenização, obtenção do vocabulário e treinamento do modelo

No README:
- Resposta correta à primeira pergunta da seção 9.5.7, baseado em resultados de execução no Notebook
- Resposta correta à segunda pergunta da seção 9.5.7 com apresentação de justificativas com referências (e.g., a partes do texto da seção ou referências externas)

Envie o link do seu repositório GitHub com o README com as respostas textuais e o arquivo IPYNB com a implementação.

Link deve ser acessível pelo professor.

## Notebook

Para acesso ao notebook, é possível encontrá-lo dentro desse mesmo repositório, com o nome de [notebookk.ipynb](./notebook.ipynb).

## Pergunta 1: Tente valores diferentes do argumento num_examples na funçãoload_data_nmt. Como isso afeta os tamanhos do vocabulário do idioma de origem e do idioma de destino?

O valor de num_examples define quantos pares de frases serão usados para construir os vocabulários dos idiomas de origem e destino. Quanto mais exemplos são incluídos, maior é a diversidade de palavras, o que resulta em vocabulários maiores. Porém, quando testado com menos números de exemplo, menos palavras diferentes foram encontradas, o que fez o vocabulário reduzir. Além disso, a criação dos vocabulários leva em consideração apenas palavras que aparecem pelo menos duas vezes, conforme o parâmetro min_freq=2, assim, com um número maior de exemplos, mais palavras atingem essa frequência mínima e são incluídas no vocabulário.

## Pergunta 2: O texto em alguns idiomas, como chinês e japonês, não tem indicadores de limite de palavras (por exemplo, espaço). A tokenização em nível de palavra ainda é uma boa ideia para esses casos? Por que ou por que não?

A tokenização em nível de palavra não é uma boa abordagem para idiomas como chinês e japonês, pois eles não utilizam espaços para separar palavras de forma explícita, o que é a base para a tokenização em palavras, prejudicando assim o processamento. O ideeal seria a tokenização a nível ded caracter, na qual cada símbolo é tratado como um token individual, o que elimina a necessidade de definir onde uma palavra começa ou termina.

