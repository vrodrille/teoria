/* 
 * File:   EntradaEnFacebook.h
 * Author: Victor M. Rivas Santos <vrivas@ujaen.es>
 *
 * Created on 27 de septiembre de 2015, 11:01
 */

#ifndef ENTRADAENFACEBOOK_H
#define	ENTRADAENFACEBOOK_H

#include <string>

/**
 * @brief Clase para almacenar una entrada en Facebook junto con los comentarios  de otros usuarios
 * @param texto Texto de la entrada en Facebook
 */
class EntradaEnFacebook {
public:
    EntradaEnFacebook(int id = 0, std::string texto = "", int maxComentarios=10);
    EntradaEnFacebook(const EntradaEnFacebook& orig);
    virtual ~EntradaEnFacebook();
    void SetId(int id);
    int GetId() const;
    void SetTexto(std::string texto);
    std::string GetTexto() const;
    int GetMaxComentarios() const;
    int GetNumComentarios() const;
    std::string GetComentario( int pos) const;
    void AddComentario( std::string nuevoComentario );
    
    
private:
    /// Identificador de entrada
    int id;
    
    /// Texto inicial de la entrada en Facebook
    std::string texto;
    
    /// Vector que guarda los comentarios de la gente a esta entrada
    std::string *comentarios;
    
    /// Máximo número de comentarios que admitimos
    int maxComentarios;
    
    /// Número real de comentarios que tenemos en cada momento, siempre <=maxComentarios
    int numComentarios;
};

#endif	/* ENTRADAENFACEBOOK_H */

