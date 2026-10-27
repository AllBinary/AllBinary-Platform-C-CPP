
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CanvasStrings
            : public virtual Object
         {

    private: static CanvasStrings* instance_owner();
    private: static CanvasStrings* instance;

    public: static CanvasStrings* getInstance();


            
    public: CanvasStrings();
        
    public: const std::string CONSTRUCTOR = "MyCanvas::MyCanvas";

    public: const std::string PAUSE = "MyCanvas::pause";

    public: const std::string UN_PAUSE = "MyCanvas::unPause";

    public: const std::string SET_FULL_SCREEN_MODE = "setFullScreenMode";

    public: const std::string SIZE_CHANGED = "sizeChanged";

    public: const std::string SCALED_IMAGES = "scaledImages";

    public: const std::string PAINT = "paint";

    public: const std::string ON_DISPLAY_CHANGE_EVENT = "onDisplayChangeEvent";

    public: const std::string UPDATE_MEASUREMENT = "updateMeasurement";

    public: const std::string FD_WIDTH = " font/display width: ";

    public: const std::string FD_HEIGHT = " font/display height: ";

    public: BasicArrayList* EMPTY_CHILD_NAME_LIST;

    public: const std::string ABOUT = "About";

    public: const std::string OPTIONS = "Options";

    public: const std::string FONT_ATLAS = "/font.png";

    public: const std::string OBJ_MODEL = "_obj";

    public: const std::string MD2_MODEL = "_md2";

    public: const std::string _PNG = ".png";

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif

        #endif
    
