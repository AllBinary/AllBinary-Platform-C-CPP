
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Feature.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeatureListenerInterface.h"
#include "GameFeatureEvent.h"

class BaseChangedGameFeatureListener
            : public Object
        : public GameFeatureListenerInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const GameFeatureUtil gameFeatureUtil = GameFeatureUtil::getInstance();

    protected: const BasicArrayList list = BasicArrayListD();

    private: bool changed = true;

    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(CommonStrings::getInstance().NOT_IMPLEMENTED, this);
    
}


    public: void onGameFeatureChange(GameFeatureEvent gameFeatureEvent){
this->logUtil.putF(StringMaker().append(this->gameFeatureUtil.GAME_FEATURE_CHANGED).append(gameFeatureEvent.getWhatChanged()).toString(), this, this->gameFeatureUtil.ON_GAME_FEATURE_CHANGE);
    
this->list.add(gameFeatureEvent.getGameOption());
    
this->setChanged(true);
    
}


    public: void add(Feature gameFeature){
this->list.add(gameFeature);
    
}


    public: void remove(Feature gameFeature){
this->list.remove(gameFeature);
    
}


    public: void setChanged(bool initialized){
this->changed= initialized;
    

                        if(!this->isChanged())
                        
                                    {
                                    this->list.clear();
    

                                    }
                                
}


    public: bool isChangedFeature(Feature gameFeature){

    bool isChanged = this->list.contains(gameFeature);;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("GameFeature: ");
    
stringBuffer.append(StringUtil::getInstance().toString(gameFeature));
    
stringBuffer.append(" isFeature: ");
    
stringBuffer.appendboolean(Features::getInstance().isFeature(gameFeature));
    
stringBuffer.append(" isChanged: ");
    
stringBuffer.appendboolean(isChanged);
    
this->logUtil.putF(stringBuffer.toString(), this, "isChanged");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isChanged;
    
}


    public: bool isChanged(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->changed;
    
}


};

            

