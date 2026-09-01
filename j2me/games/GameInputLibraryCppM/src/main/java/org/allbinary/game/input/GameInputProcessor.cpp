
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputProcessor
            : public Object
         {

    private: static GameInputProcessor instance() { return GameInputProcessor(); }

    public: static GameInputProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputProcessor::instance();
    
}


protected: GameInputProcessor(){
}


                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void processReleasedEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void processAnalog(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent, int32_t analogValue){
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allbinaryLayerManager, Integer keyAsInteger){
}


                //@Throws(Exception.constructor)
            
    public: void processReleased(AllBinaryLayerManager allbinaryLayerManager, Integer keyAsInteger){
}


};

            

