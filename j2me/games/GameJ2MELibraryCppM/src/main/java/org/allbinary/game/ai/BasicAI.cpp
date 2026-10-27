
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/game/displayable/canvas/CanvasUtil.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicAI: public ArtificialIntelligence, public GameKeyEventSourceInterface {

    public: static inline int32_t AI_VISITOR = SmallIntegerSingletonFactory::getInstance()->getAt(2);

    public: static inline int32_t ID = SmallIntegerSingletonFactory::getInstance()->getAt(1);

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();

    private: AllBinaryLayer* ownerLayerInterface;

    private: GameInput* gameInput;

    private: int32_t lastKey =  -1;

public: BasicAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput){
this->ownerLayerInterface= ownerLayerInterface;
    
this->gameInput= gameInput;
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: void processKeyAI(int32_t key){

                        if(key !=  -1)
                        
                                    {
                                    this->gameInput->add(this->gameKeyEventFactory->getInstanceForKey(this, key));
    

                                    }
                                
}


    public: void setLastKey(int32_t lastKey){
this->lastKey= lastKey;
    
}


    public: int32_t getLastKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastKey;
    
}


    public: AllBinaryLayer* getOwnerLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownerLayerInterface;
    
}


    public: GameInput* getGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInput;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append(this->getName());
    
stringBuffer->append(" LastKey: ");
    
stringBuffer->append(CanvasUtil::getKeyName(this->getLastKey()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


};

            

