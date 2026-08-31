
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RepaintBehavior.h"

class AlwaysRepaintBehavior: public RepaintBehavior {
        

    private: static const instanceC: AlwaysRepaintBehavior = new AlwaysRepaintBehavior();

    public static AlwaysRepaintBehavior getInstance();

    private: const NAME: string = "AlwaysRepaintBehavior";

    public repaint(Canvas canvas);

    public onChangeRepaint(Canvas canvas);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H
