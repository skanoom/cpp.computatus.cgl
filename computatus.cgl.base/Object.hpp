//==<-Propriedades->=====================================================================================
// Arquivo.: Object.hpp
// Criado..: 25/03/2013
//=======================================================================================================

//==<-Bloqueio-de-Cabecalho->============================================================================
  #ifndef OBJECT_CLASS
  #define OBJECT_CLASS
//=======================================================================================================

//==<-System-Library->===================================================================================
  #include <typeinfo>
//=======================================================================================================

//==<-Forward->==========================================================================================
  template <typename T> class Class;
//=======================================================================================================

//==<-Classe->===========================================================================================
  class Object {

  //--<-Atributos-Estaticos->----------------------------------------------------------------------------
    public: static Class<Object> classin;
  //-----------------------------------------------------------------------------------------------------

  //--<-Construtores->-----------------------------------------------------------------------------------
    public: Object();
  //-----------------------------------------------------------------------------------------------------

  //--<-Destrutores->------------------------------------------------------------------------------------
    public: ~Object();
  //-----------------------------------------------------------------------------------------------------

  //--<-Metodos-Protegidos->-----------------------------------------------------------------------------
    protected: void finalize();
    protected: Object& clone();
  //-----------------------------------------------------------------------------------------------------

  //--<-Metodos-Publicos->-------------------------------------------------------------------------------
    public: bool instanceOf(Object* superClass);
    public: bool equals(Object& obj);
    public: int hashCode();
    public: void notify();
    public: void notifyAll();
    public: void toString();
    public: void wait();
    public: void wait(long timeout);
  //-----------------------------------------------------------------------------------------------------

  };
//=======================================================================================================

//==<-Fim-de-Cabecalho->=================================================================================
  #endif // OBJECT_CLASS
//=======================================================================================================
