
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/testgamedemo/R.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidResources
            : public Object
         {

    private: static AndroidResources* instance() { static std::unique_ptr<AndroidResources> value(new AndroidResources()); return value.get(); }

    public: static AndroidResources* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidResources::instance();
    
}


    public: R::Companion::drawable* drawable = new R::Companion::drawable();

    public: R::Companion::id* id = new R::Companion::id();

    public: R::Companion::layout* layout = new R::Companion::layout();

    public: R::Companion::raw* raw = new R::Companion::raw();

    public: R::Companion::string* string = new R::Companion::string();

};

            

