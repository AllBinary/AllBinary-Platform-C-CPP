
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROIDRESOURCES_H
        #define ORG_ALLBINARY_ANDROIDRESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class R;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidResources
            : public virtual Object
         {

    private: static AndroidResources* instance_owner();
    private: static AndroidResources* instance;

    public: static AndroidResources* getInstance();


            
    public: AndroidResources();
        
    public: R::Companion::drawable* drawable;

    public: R::Companion::id* id;

    public: R::Companion::layout* layout;

    public: R::Companion::raw* raw;

    public: R::Companion::string* string;

};

            


        #endif //ORG_ALLBINARY_ANDROIDRESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROIDRESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROIDRESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/game/testgamedemo/R.h>)
#include <org/allbinary/game/testgamedemo/R.h>
#endif

        #endif
    
