
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROIDRESOURCES_H
        #define ORG_ALLBINARY_ANDROIDRESOURCES_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/testgamedemo/R.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidResources
            : public Object
         {

    private: static AndroidResources instance() { return AndroidResources(); }

    public: static AndroidResources getInstance();

    public: R::Companion::drawable drawable = R::Companion::drawable();

    public: R::Companion::id id = R::Companion::id();

    public: R::Companion::layout layout = R::Companion::layout();

    public: R::Companion::raw raw = R::Companion::raw();

    public: R::Companion::string string = R::Companion::string();

};

            


        #endif //ORG_ALLBINARY_ANDROIDRESOURCES_H
