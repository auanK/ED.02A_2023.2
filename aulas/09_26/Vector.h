����   > *  *06.enums_orden_excessoes/02.porquinho/Coin  java/lang/Enum C10 ,L06.enums_orden_excessoes/02.porquinho/Coin; C25 C50 C100 value D volume I label Ljava/lang/String; <init> *(Ljava/lang/String;IDILjava/lang/String;)V Code  java/lang/Error  �Unresolved compilation problem: 
	The declared package "" does not match the expected package "06.enums_orden_excessoes.02.porquinho"

     (Ljava/lang/String;)V LineNumberTable LocalVariableTable this getValue ()D   !Unresolved compilation problem: 
 	getVolume ()I getLabel ()Ljava/lang/String; toString 
SourceFile Solver.java 	Signature >Ljava/lang/Enum<L06.enums_orden_excessoes/02.porquinho/Coin;>;@0     @    @    @    @ 	      
                        4     
� Y� �                   
             4     
� Y� �                   
       ! "     4     
� Y� �                   
       # $     4     
� Y� �                   
      % $     4     
� Y� �           !        
      &    ' (    )                                                                                                                                                                                                                                                                                                                                                                                                          
� Y� �           J        
      ( )     4     
� Y� �           c        
      * +     4     
� Y� �           r        
      ,    -                                                                                                                                                                                                                                                                                                                                 (size_ == capacity_) {  // aumenta a capacidade se necessário
            resize(2 * (capacity_ + 1));
        }
        elements_[size_] = value;  // insere o elemento
        size_++;                   // incrementa o tamanho da lista
    }

    /**
     * @brief Retorna uma referência para o elemento na posição i da lista
     * @details Se o índice não existir na lista, a função lança uma exceção.
     * @param i Índice do elemento desejado
     * @return Referência para o elemento na posição i da lista
     */
    int &at(unsigned int i) {
        if (i < size_) {
            return elements_[i];
        }
        // caso o índice não exista na lista, lançar uma exceção
        throw std::out_of_range("Index out of range");
    }

    /**
     * @brief Retorna o número de elementos da lista
     * @return O número de elementos atualmente na lista
     */
    int size() { return size_; }

    /**
     * @brief Sobrecarga do operador de indexação
     * @details Recebe um índice i e retorna um ponteiro para o elemento na
     * posição i do vetor. Se o índice estiver fora do intervalo válido, o
     * comportamento da função é inesperado.
     * @param i Índice do elemento desejado
     * @return Ponteiro para o elemento na posição i do vetor
     */
    int *operator[](int i) { return &elements_[i]; }

    // Destrutor: libera memoria alocada
    ~Vector() {
        delete[] elements_;
        std::cout << "Vector destruído";
    }
};

#endif