# Diagnóstico Automotivo OBD-II

## Descrição

Este projeto é uma ferramenta de diagnóstico automotivo baseada no protocolo **OBD-II**. Ele permite ler códigos de falha (DTCs) e monitorar parâmetros do veículo, como RPM, velocidade e temperatura do motor. A comunicação é feita através de um adaptador **ELM327**, conectando-se à ECU (Unidade de Controle do Motor) do veículo para fornecer informações essenciais para manutenção e diagnóstico.

## Funcionalidades

- **Leitura de Códigos de Falha (DTCs)**: Identificação e interpretação dos códigos de falha gerados pela ECU do veículo.
- **Monitoramento de Parâmetros do Veículo**: Acompanhamento em tempo real de parâmetros como RPM, velocidade e temperatura do motor.
- **Comunicação com ECU**: Utiliza o adaptador ELM327 para acessar e ler dados da ECU via protocolo OBD-II.

## Tecnologias Utilizadas

- **Linguagem de Programação**: C
- **Protocolo OBD-II**: ISO 9141, ISO 14230 (KWP2000), ISO 15765 (CAN), entre outros.
- **Adaptador ELM327**: Utilizado para a comunicação entre o veículo e o sistema.

## Requisitos

- **Adaptador OBD-II ELM327**: Para conectar o veículo à interface do sistema.
- **Microcontrolador ou Computador**: Um dispositivo como **Raspberry Pi**, **Arduino** ou **PC** para executar o sistema.
- **Cabo OBD-II**: Conexão entre o adaptador e a porta OBD-II do veículo.

## Como Rodar o Projeto

### 1. Conectar o Adaptador OBD-II
Conecte o adaptador ELM327 à porta OBD-II do veículo. Essa porta geralmente fica localizada abaixo do painel, perto do volante.

### 2. Configuração do Ambiente
Certifique-se de que o ambiente de desenvolvimento está configurado corretamente. O projeto pode ser compilado em sistemas **Linux** ou **Windows** com suporte para comunicação serial (UART).

### 3. Compilação
Use o **gcc** ou outro compilador C para compilar o código-fonte. No terminal, execute o comando:

```bash
gcc -o obd_diagnostics obd_diagnostics.c


OBD-II-Automotive-Diagnostics/
├── src/                          # Código-fonte do projeto
│   ├── obd_diagnostics.c         # Arquivo principal de execução do sistema
│   ├── obd_communicator.c        # Funções de comunicação com o adaptador OBD-II
│   ├── obd_parser.c              # Funções para análise e interpretação dos dados
│   └── utils.c                   # Funções auxiliares, como conversões e validações
├── include/                      # Arquivos de cabeçalho (.h)
│   ├── obd_diagnostics.h         # Definições principais do sistema
│   ├── obd_communicator.h        # Definições das funções de comunicação OBD-II
│   ├── obd_parser.h              # Definições das funções de análise dos dados
│   └── utils.h                   # Definições das funções auxiliares
├── docs/                         # Documentação do projeto
│   ├── readme.md                 # Descrição do projeto, como configurar e usar
│   └── diagramas/                # Diagramas e fluxogramas do projeto
│       └── diagrama_fluxo.png    # Exemplo de diagrama de fluxo do sistema
├── test/                         # Testes unitários e integração
│   ├── test_obd_communicator.c   # Testes das funções de comunicação com OBD-II
│   ├── test_obd_parser.c         # Testes das funções de análise de dados
│   └── test_utils.c              # Testes das funções auxiliares
├── Makefile                      # Arquivo de construção do projeto
├── LICENSE                       # Licença do projeto (exemplo: MIT)
└── README.md                     # Documentação do projeto
