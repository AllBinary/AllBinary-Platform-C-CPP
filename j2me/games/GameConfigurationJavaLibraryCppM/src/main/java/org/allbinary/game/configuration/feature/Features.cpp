
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/Features.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"

Object* Features::SINGLETON = NullUtil::getInstance()->NULL_OBJECT;

    auto Features::getInstance() -> Features*{

                        if(Features::SINGLETON == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    Features::SINGLETON= new Features();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<Features*>(Features::SINGLETON);
    
}


Features::Features() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->list= new BasicArrayListD();
    
this->defaultList= new BasicArrayListD();
    
this->init();
    
}


                //@Throws(Exception.constructor)
            
    auto Features::addDefault(Feature* gameFeature) -> void{
this->add(gameFeature);
    

                        if(!this->defaultList->contains(gameFeature))
                        
                                    {
                                    this->defaultList->add(gameFeature);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto Features::add(Feature* gameFeature) -> void{

                        if(!this->list->contains(gameFeature))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append(JavaString::valueOf(gameFeature))), this, this->commonStrings->ADD);
    
this->list->add(gameFeature);
    
GameFeatureEventHandler::getInstance()->fireEvent(new GameFeatureEvent(gameFeature, JavaString::valueOf(gameFeature)));
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto Features::removeDefault(Feature* gameFeature) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append(JavaString::valueOf(gameFeature))), this, "removeDefault");
    
this->remove(gameFeature);
    
this->defaultList->remove(gameFeature);
    
}


                //@Throws(Exception.constructor)
            
    auto Features::remove(Feature* gameFeature) -> void{

                        if(this->list->contains(gameFeature))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->REMOVE);
    
this->list->remove(gameFeature);
    
GameFeatureEventHandler::getInstance()->fireEvent(new GameFeatureEvent(gameFeature, JavaString::valueOf(gameFeature)));
    

                                    }
                                
}


    auto Features::init() -> void{

        try {
            
    GameFeatureFactory* gameFeatureFactory = GameFeatureFactory::getInstance();;
    

    InputFeatureFactory* inputFeatureFactory = InputFeatureFactory::getInstance();;
    

    SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory::getInstance();;
    

    TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory::getInstance();;
    
this->addDefault(gameFeatureFactory->ARTIFICIAL_INTELLEGENCE_PROCESSOR);
    
this->addDefault(gameFeatureFactory->COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
    
this->addDefault(gameFeatureFactory->GAME_INPUT_LAYER_PROCESSOR);
    
this->addDefault(gameFeatureFactory->TICKABLE_LAYER_PROCESSOR);
    
this->addDefault(inputFeatureFactory->MULTI_KEY_PRESS);
    
this->addDefault(inputFeatureFactory->REMOVE_DUPLICATE_KEY_PRESSES);
    
this->addDefault(gameFeatureFactory->SCREEN_SHAKE);
    
this->addDefault(gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION);
    

    GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory::getInstance()->getOperatingSystemInstance();;
    

                        if(operatingSystemInterface->isOverScan())
                        
                                    {
                                    this->addDefault(sensorFeatureFactory->NO_ORIENTATION);
    
this->addDefault(touchFeatureFactory->HIDE_SCREEN_BUTTONS);
    

                                    }
                                
                        else {
                            this->addDefault(sensorFeatureFactory->ORIENTATION_SENSORS);
    
this->addDefault(touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS);
    

                        }
                            
this->addDefault(touchFeatureFactory->TOUCH_ENABLED);
    
this->addDefault(MainFeatureFactory::getInstance()->FULL_SCREEN);
    
this->addDefault(MainFeatureFactory::getInstance()->LOAD_ONDEMAND);
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    
}

}


    auto Features::isDefault(Feature* gameFeature) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->defaultList->contains(gameFeature);;
    
}


    auto Features::isFeature(Feature* gameFeature) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->contains(gameFeature);;
    
}


                //@Throws(Exception.constructor)
            
    auto Features::toggle(Feature* gameFeature) -> void{

                        if(this->isFeature(gameFeature))
                        
                                    {
                                    this->remove(gameFeature);
    

                                    }
                                
                        else {
                            this->add(gameFeature);
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_CPP
