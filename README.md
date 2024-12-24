
<h1 align="center">  Diagnóstico Automotivo OBD-II </h1>

![GitHub repo size](https://img.shields.io/github/repo-size/iuricode/README-template?style=for-the-badge)
![GitHub language count](https://img.shields.io/github/languages/count/iuricode/README-template?style=for-the-badge)
![GitHub forks](https://img.shields.io/github/forks/iuricode/README-template?style=for-the-badge)
![Bitbucket open issues](https://img.shields.io/bitbucket/issues/iuricode/README-template?style=for-the-badge)
![Bitbucket open pull requests](https://img.shields.io/bitbucket/pr-raw/iuricode/README-template?style=for-the-badge)

> Ferramenta de diagnóstico automotivo baseada no protocolo OBD-I, permitindo a leitura de códigos de falha (DTCs) e monitoramento de parâmetros do veículo.


## ⚙️ Status do Projeto

O projeto Diagnóstico Automotivo OBD-I está em pleno desenvolvimento, com atualizações planejadas para expandir e aprimorar suas funcionalidades. Confira as próximas etapas:

- ✅ Leitura de códigos de falha (DTCs): Decodificação e exibição detalhada de erros identificados pelo sistema do veículo.
- ✅ Monitoramento de parâmetros em tempo real: Acompanhamento contínuo de informações como RPM, temperatura do motor e velocidade.
- 🚧 Implementação de diagnóstico avançado: Funcionalidades adicionais para análise aprofundada e maior precisão nos diagnósticos.
- 🚧 Suporte a múltiplos protocolos automotivos: Expansão para incluir protocolos além do OBD-I, aumentando a compatibilidade com diferentes veículos.
- 🚧 Melhorias na interface com hardware: Otimizações para interação com adaptadores ELM327 e desenvolvimento de cabos OBD-I personalizados para maior eficiência e durabilidade.
  
#### Estamos trabalhando ativamente para tornar esta ferramenta mais completa e acessível para   entusiastas e profissionais da área automotiva.


## 💻 Pré-requisitos

Antes de iniciar, certifique-se de que os seguintes requisitos foram atendidos para garantir o funcionamento adequado do Diagnóstico Automotivo OBD-I:

- Adaptador OBD-II compatível: Possuir um adaptador **ELM327** configurado para comunicação com o protocolo OBD-II.
- Sistema operacional: Estar utilizando uma máquina com **Windows, Linux, ou macOS**.
- Conhecimento técnico: Ter noções básicas de diagnóstico automotivo e familiaridade com o uso de ferramentas de linha de comando.

#### Cumprindo esses requisitos, você estará pronto para explorar todo o potencial desta ferramenta! 🚗✨

## 🚀 Instalando Diagnóstico Automotivo OBD-I

Siga os passos abaixo para instalar o Diagnóstico Automotivo OBD-II no seu sistema:

**Requisitos Gerais**
- Certifique-se de ter o Git instalado.
- É necessário possuir o compilador make configurado no sistema.
  
**Linux e macOS**
- Abra o terminal.

- Clone o repositório do projeto:
```bash
  git clone https://github.com/carlos0ff/OBD-II-Automotive-Diagnostics.git  
```
- Acesse o diretório do projeto:
```bash
  cd diagnostico-obd-ii   
```
- Compile o código utilizando o comando ``` make ```:
```bash
  make  
```
- Execute o programa: 
```bash
  ./diagnostico_obd_ii  
```

#### O software está pronto para uso! Conecte o adaptador OBD-I ao veículo e comece o diagnóstico.

**Problemas Comuns na Instalação**
- Caso receba erros durante a execução do comando make, verifique se as dependências do compilador estão instaladas no sistema.
- Para distribuições Linux baseadas em Debian/Ubuntu, você pode instalar o ```build-essential```:
```bash 
sudo apt update && sudo apt install build-essential  
```
- No macOS, instale o Xcode Command Line Tools
```bash 
xcode-select --install  
```
**Se precisar de ajuda adicional, consulte a seção Contribuindo ou abra uma issue no repositório.**

## ☕ Usando Diagnóstico Automotivo OBD-II
Para usar o Diagnóstico Automotivo OBD-II, conecte o adaptador OBD-II ELM327 ao veículo e execute o seguinte comando para iniciar o diagnóstico:

```bash 
./diagnostico_obd_ii
```

Isso irá conectar ao veículo, ler os códigos de falha (DTCs) e monitorar os parâmetros em tempo real.

Exemplo de uso:

Leitura de Códigos de Falha: 
- O sistema irá exibir os DTCs gerados pela ECU do veículo.
- Monitoramento de Parâmetros: Você poderá visualizar parâmetros como RPM, velocidade e temperatura do motor.

## 📫 Contribuindo para Diagnóstico Automotivo OBD-II
Para contribuir com o Diagnóstico Automotivo OBD-II, siga estas etapas:

- Bifurque este repositório.
- Crie um branch: ``` git checkout -b <nome_branch>. ```
- Faça suas alterações e confirme-as: ```git commit -m '<mensagem_commit>'```
- Envie para o branch original: ```git push origin <nome_branch>```
- Crie uma solicitação de ```pull```.
- Como alternativa, consulte a documentação do GitHub em como criar uma solicitação pull.

## 🤝 Colaboradores
Agradecemos às seguintes pessoas que contribuíram para este projeto:

<table>
  <tr>
      <td align="center">
        <a href="https://github.com/carlos0ff" title="Iuri Silva">
          <img src="https://avatars3.githubusercontent.com/u/31936044" width="100px;" alt="Foto do Iuri Silva no GitHub"/><br>
          <sub><b>Iuri Silva</b></sub>
        </a>
      </td>
        <td align="center">
          <a href="https://github.com/markzuckerberg" title="Mark Zuckerberg">
            <img src="https://s2.glbimg.com/FUcw2usZfSTL6yCCGj3L3v3SpJ8=/smart/e.glbimg.com/og/ed/f/original/2019/04/25/zuckerberg_podcast.jpg" width="100px;" alt="Foto do Mark Zuckerberg"/><br>
            <sub> <b>Mark Zuckerberg</b> </sub>
          </a>
        </td>
        <td align="center"> <a href="https://github.com/stevejobs" title="Steve Jobs">
          <img src="https://miro.medium.com/max/360/0*1SkS3mSorArvY9kS.jpg" width="100px;" alt="Foto do Steve Jobs"/><br> 
          <sub> <b>Steve Jobs</b></sub>
      </a>
    </td>
  </tr>
</table>

## 😄 Seja um dos contribuidores
Quer fazer parte desse projeto? Clique [AQUI](https://github.com/) e leia como contribuir.

## 📝 Licença
Este projeto está sob a Licença MIT. Veja o arquivo  [LICENÇA](https://github.com/) para mais detalhes.
