# Relatório sobre Segmentação de Imagem e Extração de Atributos
Neste relatório, vamos explorar duas importantes tarefas de processamento de imagem: segmentação de imagem e extração de atributos. Iremos descrever cada uma dessas tarefas, suas aplicações, produtos comerciais relacionados e os segmentos de mercado envolvidos. Além disso, realizaremos testes práticos e registraremos os resultados obtidos.

## Segmentação de Imagem
A segmentação de imagem no contexto de machine learning refere-se à tarefa de dividir uma imagem em regiões ou objetos semelhantes. Isso é fundamental para identificar áreas de interesse e preparar dados para tarefas mais avançadas de análise visual. Alguns exemplos de métodos para aplicar a tarefa de segmentação de imagem são:

**Segmentação Semântica -** Atribuir uma classe a cada pixel na imagem, permitindo a compreensão detalhada do conteúdo visual.

**Segmentação de Instância -** Identificar e segmentar objetos individuais em uma imagem, atribuindo uma máscara única para cada instância.

### Aplicações

**Recorte de pessoas -** Entre as possíveis aplicações, uma das mais utilizadas é para recortar pessoas de uma imagem, seja para deixar somente as pessoas, removendo o background, ou até mesmo para removê-las.

**Culturas agrícolas -** Outra aplicação relativamente comum é no monitoramento de culturas agrícolas através de imagens obtidas por drones ou satélites.

### Produtos

Os produtos de segmentação de imagem são amplamente adotados por empresas de tecnologia, laboratórios de pesquisa em inteligência artificial, e indústrias que dependem de análise visual avançada, como automação industrial e veículos autônomos. Alguns destes produtos são:

**DeepLab -** Um modelo de segmentação semântica baseado em deep learning da Google, disponível como parte do TensorFlow.

**Mask R-CNN -** Um modelo de segmentação de instância que combina detecção de objetos e segmentação do Facebook AI Research, implementado no PyTorch.

## Extração de Atributos
A extração de atributos envolve identificar características significativas em uma imagem que podem ser úteis para modelos de machine learning. Esses atributos podem incluir bordas, texturas, cores ou características mais abstratas aprendidas por redes neurais convolucionais. Essa estratégia pode ser uttilizado, por exemplo, em:

**Pré-processamento de Dados -** Extrair características relevantes para alimentar modelos de aprendizado de máquina, reduzindo a dimensionalidade dos dados.

**Aprendizado Não Supervisionado -** Identificar padrões e estruturas úteis em conjuntos de dados de imagens.

### Aplicações

**Reconhecimento de Objetos -** Em sistemas de visão computacional, a extração de atributos é utilizada para identificar características distintivas de objetos. Por exemplo, detectar bordas, texturas ou formas específicas que ajudam a distinguir entre diferentes classes de objetos.

**Classificação de Imagens -** Ao alimentar modelos de aprendizado de máquina com dados de imagem, a extração de atributos ajuda a representar as imagens de forma mais compreensível para o modelo. Características como histogramas de cores, gradientes ou padrões podem ser extraídos e usados como entrada para algoritmos de classificação.

### Produtos

**scikit-image -** Uma biblioteca amplamente utilizada para processamento de imagem em Python, incluindo ferramentas de extração de atributos para machine learning.

**FeatureTools -** Uma biblioteca, disponibilizada pela Featture Labs, que automatiza a engenharia de atributos, incluindo recursos para dados de imagem.

### Teste do Mask R-CNN
Para testar o produto, foi escolhida a seguintet imagem:

![image](https://github.com/BartonThomas/sem-3/assets/99219127/e3212508-29c5-49c2-a69b-40313c7b00c0)

Fazendo o upload da imagem, após um pequeno carregamento, a página é redirecionada para uma tela onde posso selecionar campos da imagem. Selecionando uma peça de xadrez, o AI consegue identificar a peça inteira, como visto ao selecionar o rei abaixo:

![image](https://github.com/BartonThomas/sem-3/assets/99219127/ff34c0ff-6492-44d6-8e58-824954743f75)

Selecionando todas as peças, podemos ver que a assertividade do AI foi impecável, conseguindo identificar todas as peças perfeitamente, como demonstrado abaixo:

![image](https://github.com/BartonThomas/sem-3/assets/99219127/7d2ff542-7e59-48d5-9473-f4a75d72142c)
