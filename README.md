# Chars

> Criei isto apenas por diversão. Talvez não seja muito perfomatico.

Pequena ferramenta para geração de caracteres aleatórios.

## Compilando

Clone o repositório:

```
git clone https://github.com/loucuraOverflow/chars.git
cd chars
```

Execute o script `autogen`:

```
chmod +x autogen
./autogen
```

Configure:

```
./configure
```

E, então, compile:

```
make
```

O executavel compilado terá o nome de `chars`. Coloque o caminho até o arquivo na sua variável de ambiente `PATH`.


## Uso

```
chars [<tamanho>]
```

Onde
+ `[<tamanho>]` é um paramétro opcional que determina a quantidade de caracteres á serem gerados. (**padrão**: 10)
