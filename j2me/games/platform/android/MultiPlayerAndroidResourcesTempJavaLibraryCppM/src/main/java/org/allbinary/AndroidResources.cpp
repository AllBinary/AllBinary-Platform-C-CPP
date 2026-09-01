
        /* Generated Code Do Not Modify */
        



            #include "../../java/lang/Object.h"
        
#include <org/allbinary/game/testgamedemo/R.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidResources
            : public Object
         {

    private: static AndroidResources instance() { return AndroidResources(); }

    public: static AndroidResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidResources::instance();
    
}


    public: R::Companion::drawable drawable = R::Companion::drawable();

    public: R::Companion::id id = R::Companion::id();

    public: R::Companion::layout layout = R::Companion::layout();

    public: R::Companion::raw raw = R::Companion::raw();

    public: R::Companion::string string = R::Companion::string();

};

            

