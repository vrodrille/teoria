/** 
 * @file Componente.h
 * @author algarcia
 *
 * @date 11 de enero de 2016, 15:06
 */

#ifndef COMPONENTE_H
#define COMPONENTE_H

#include <string>

using std::string;

/**
 * Los objetos de esta clase representan componentes que se utilizan para la
 * fabricación de computadoras
 * @brief Pieza de computadora
 */
class Componente
{
   private:
      string _marca;      ///< Marca del componente
      string _modelo;     ///< Modelo del componente
      string _numSerie;   ///< Número de serie del componente
      float _precio;      ///< Precio del componente

   public:
      Componente ( );
      Componente ( const Componente& orig );
      virtual ~Componente ( );
      void setPrecio ( float nPrecio );
      float getPrecio ( ) const;
      void setNumSerie ( string nNumSerie );
      string getNumSerie ( ) const;
      void setModelo ( string nModelo );
      string getModelo ( ) const;
      void setMarca ( string nMarca );
      string getMarca ( ) const;
      /**
       * @brief Genera una cadena de texto "user-friendly" sobre el componente
       * @return Una cadena de texto con información del componente
       */
      virtual string info () = 0;
};

#endif /* COMPONENTE_H */