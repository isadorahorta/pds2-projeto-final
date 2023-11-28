#ifndef DVD_HPP
#define DVD_HPP

#include "filme.hpp"

enum class Categoria {
    Lancamento,
    Estoque,
    Promocao
};

class DVD : public Filme {
protected:
    Categoria categoria;

public:
    DVD(const std::string& titulo, int codigo, int quantidade, Categoria _categoria);

    double calcularValorLocacao(int dias) const override;
};

#endif // DVD_HPP