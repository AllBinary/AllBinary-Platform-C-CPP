
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

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameRunnable.h>

      
#include <org/allbinary/game/displayable/canvas/NullDisplayable.h>

      
#include <org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLFeatureFactory.h"

class CurrentDisplayableFactory
            : public Object
         {
        

    private: static const instance: CurrentDisplayableFactory = new CurrentDisplayableFactory();

    public static CurrentDisplayableFactory getInstance();

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const SET_DISPLAYABLE: string = "setDisplayable";

    private: const SET_RUNNABLE: string = "setRunnable";

    private: const CLEAR_RUNNABLE: string = "clearRunnable";

    private: const SET_USED_RUNNABLE: string = "setUsedRunnable";

    private: const RUNNABLE: string = "Runnable: ";

    private: const RUNNABLE_WAS_ALREADY_IN_USE: string = "Runnable was already in use: ";

    public const DEFAULT_CHILD_NAME_LIST: BasicArrayList = new BasicArrayListD();

    private: displayable: Displayable = NullDisplayable.getInstance()!;

    private: openGlReadydisplayable: Displayable = NullDisplayable.getInstance()!;

    private: runnable: GameRunnable = NullWaitGameRunnable.getInstance()!;

    private: usedRunnable: GameRunnable = NullWaitGameRunnable.getInstance()!;

private constructor ();

    public setMyCanvas(MyCanvas displayable);

    public setDisplayable(Displayable displayable);

    public setOpenGlReadydisplayable(Displayable openGlReadydisplayable);

    public Displayable getOpenGlReadydisplayable();

    public setRunnable(GameRunnable runnable);

    public clearRunnable();

    update();

    public Displayable getDisplayable();

    public GameRunnable getUsedRunnable();

    public setUsedRunnable(GameRunnable usedRunnable);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H
