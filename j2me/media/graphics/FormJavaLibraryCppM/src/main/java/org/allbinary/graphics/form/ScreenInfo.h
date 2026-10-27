
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenInfo
            : public virtual Object
         {

    private: static ScreenInfo* instance_owner();
    private: static ScreenInfo* instance;

    public: static ScreenInfo* getInstance();


            
    public: ScreenInfo();
        
    public: const int32_t SMALL_WIDTH = 320;

    public: const int32_t SMALL_HEIGHT = 240;

    public: const int32_t MEDIUM_WIDTH = 800;

    public: const int32_t MEDIUM_HEIGHT = 600;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H_COMPLETE
        
        #endif
    
