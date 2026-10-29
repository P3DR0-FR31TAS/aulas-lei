# Ficha 10 Parte 2

## Exercicio 1 - O que é uma arvore binária de pesquisa?

Uma arvore binária de pesquisa (BST) é uma estrutura de dados nao linear e hierárquica que otimiza a pesquisa, a inserção e remoção de elementos.

A sua característica fundamental é a **regra de ordenação**: cada nó pode ter no máximo dois filhos, garantindo sempre que:

- Os valores da subárvore **esquerda** são estritamente **menores** que o nó pai.
- Os valores da subárvore **direita** são estritamente **maiores** que o nó pai.

## Exercício 2 - O que é uma árvore binária degenerada?

Uma **árvore binária degenerada** ocorre quando cada nó possui apenas um único filho, assumindo a estrutura e o comportamento de uma lista ligada.

- **Causa comum:** Inserção de dados que já se encontram ordenados (de forma crescente ou decrescente).
- **Estrutura:** A altura da árvore deixa de ser logarítmica e passa a ser proporcional ao número total de nós ($n$).
- **Desempenho:** A complexidade temporal das operações (pesquisa, inserção e remoção) degrada-se de `O(log n)` para `O(n)` no pior caso.
