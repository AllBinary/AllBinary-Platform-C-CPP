
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScreenInfo
            : public Object
         {

    private: static ScreenInfo instance() { return ScreenInfo(); }

    public: static ScreenInfo getInstance();

    public: const int32_t SMALL_WIDTH = 320;

    public: const int32_t SMALL_HEIGHT = 240;

    public: const int32_t MEDIUM_WIDTH = 800;

    public: const int32_t MEDIUM_HEIGHT = 600;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H
