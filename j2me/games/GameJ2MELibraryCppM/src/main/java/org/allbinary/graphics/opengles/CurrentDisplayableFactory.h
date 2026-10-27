
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Displayable;
class J2MEUtil;
class Features;
class AllBinaryGameCanvas;
class DemoCanvas;
class GameInputMappingCanvas;
class GameInputMappingInstructionsCanvas;
class GameRunnable;
class NullDisplayable;
class NullWaitGameRunnable;
class SWTUtil;
class HighScoresCanvas;
class GraphicsStrings;
class CanvasStrings;
class MyCanvas;
class PreLogUtil;
class StringMaker;
class StringUtil;
class CommonSeps;
class CommonStrings;
class NullRunnable;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLFeatureFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CurrentDisplayableFactory
            : public virtual Object
         {

    private: static CurrentDisplayableFactory* instance_owner();
    private: static CurrentDisplayableFactory* instance;

    public: static CurrentDisplayableFactory* getInstance();

    private: CommonStrings* commonStrings;

    private: CanvasStrings* canvasStrings;

    private: StringUtil* stringUtil;

    private: const std::string SET_DISPLAYABLE = "setDisplayable";

    private: const std::string SET_RUNNABLE = "setRunnable";

    private: const std::string CLEAR_RUNNABLE = "clearRunnable";

    private: const std::string SET_USED_RUNNABLE = "setUsedRunnable";

    private: const std::string RUNNABLE = "Runnable: ";

    private: const std::string RUNNABLE_WAS_ALREADY_IN_USE = "Runnable was already in use: ";

    public: BasicArrayList* DEFAULT_CHILD_NAME_LIST;

    private: Displayable* displayable;

    private: Displayable* openGlReadydisplayable;

    private: GameRunnable* runnable;

    private: GameRunnable* usedRunnable;

private: CurrentDisplayableFactory();

    public: void setMyCanvas(MyCanvas* displayable);

    public: void setDisplayable(Displayable* displayable);

    public: void setOpenGlReadydisplayable(Displayable* openGlReadydisplayable);

    public: Displayable* getOpenGlReadydisplayable();

    public: void setRunnable(GameRunnable* runnable);

    public: void clearRunnable();

    private: void update();

    public: Displayable* getDisplayable();

    public: GameRunnable* getUsedRunnable();

    public: void setUsedRunnable(GameRunnable* usedRunnable);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/DemoCanvas.h>)
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>)
#include <org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>)
#include <org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameRunnable.h>)
#include <org/allbinary/game/displayable/canvas/GameRunnable.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/NullDisplayable.h>)
#include <org/allbinary/game/displayable/canvas/NullDisplayable.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>)
#include <org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>
#endif
#if __has_include(<org/allbinary/game/layer/SWTUtil.h>)
#include <org/allbinary/game/layer/SWTUtil.h>
#endif
#if __has_include(<org/allbinary/game/score/displayable/HighScoresCanvas.h>)
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/GraphicsStrings.h>)
#include <org/allbinary/graphics/GraphicsStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/NullRunnable.h>)
#include <org/allbinary/thread/NullRunnable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif

        #endif
    
