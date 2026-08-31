
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DisplayInfoSingleton.h"

class GameTickDisplayInfoSingleton
            : public Object
         {
        

    private: static const instance: GameTickDisplayInfoSingleton = new GameTickDisplayInfoSingleton();

    public static GameTickDisplayInfoSingleton getInstance();

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: lastWidth: int32_t = this.displayInfoSingleton!.getLastWidth()!;

    private: lastHeight: int32_t = this.displayInfoSingleton!.getLastHeight()!;

    private: lastHalfWidth: int32_t = this.displayInfoSingleton!.getLastHalfWidth()!;

    private: lastHalfHeight: int32_t = this.displayInfoSingleton!.getLastHalfHeight()!;

    public update();

    public int32_t getLastWidth();

    public int32_t getLastHeight();

    public int32_t getLastHalfWidth();

    public int32_t getLastHalfHeight();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
