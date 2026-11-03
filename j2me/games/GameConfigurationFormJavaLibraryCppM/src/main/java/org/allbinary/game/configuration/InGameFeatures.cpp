
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/InGameFeatures.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>

      
#include <org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/TouchFeatureFactory.h>

      
#include <org/allbinary/init/Init.h>

      
#include <org/allbinary/input/gyro/OrientationData.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InGameFeatures::InGameFeatures() {
        }
        
    auto InGameFeatures::init() -> void{

    std::string LABEL = "Screen Buttons";;
    

    OrientationData* orientationData = OrientationData::getInstance();;
    

    BasicArrayList* exclusiveOrientationSensorVector = dynamic_cast<BasicArrayList*>(GameFeatureChoiceGroups::getExclusiveInstance()->get()->get(orientationData->ORIENTATION_SENSOR_INPUT));;
    

    InGameFeatureChoiceGroups* inGameFeatureChoiceGroups = InGameFeatureChoiceGroups::getExclusiveInstance();;
    

                        if(exclusiveOrientationSensorVector != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* inGameExclusiveOrientationSensorVectorCanBeNull = JavaBoxes::toObject(inGameFeatureChoiceGroups->get()->get(orientationData->ORIENTATION_SENSOR_INPUT));;
    

                        if(inGameExclusiveOrientationSensorVectorCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    this->addToInGameMenu();
    

                                    }
                                
                        else {
                            
    BasicArrayList* inGameExclusiveOrientationSensorVector = dynamic_cast<BasicArrayList*>(inGameExclusiveOrientationSensorVectorCanBeNull);;
    

                        if(inGameExclusiveOrientationSensorVector->size() == 0)
                        
                                    {
                                    this->addToInGameMenu();
    

                                    }
                                

                        }
                            

                                    }
                                

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(TouchFeatureFactory::getInstance()->SHOW_SCREEN_BUTTONS) || features->isFeature(TouchFeatureFactory::getInstance()->AUTO_HIDE_SHOW_SCREEN_BUTTONS) || features->isFeature(TouchFeatureFactory::getInstance()->HIDE_SCREEN_BUTTONS))
                        
                                    {
                                    
    BasicArrayList* exclusiveScreenButtonsVector = new BasicArrayListD();;
    

    TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory::getInstance();;
    
exclusiveScreenButtonsVector->add(touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS);
    
exclusiveScreenButtonsVector->add(touchFeatureFactory->SHOW_SCREEN_BUTTONS);
    
exclusiveScreenButtonsVector->add(touchFeatureFactory->HIDE_SCREEN_BUTTONS);
    
inGameFeatureChoiceGroups->add(LABEL, exclusiveScreenButtonsVector);
    

                                    }
                                
}


    auto InGameFeatures::addToInGameMenu() -> void{

    OrientationData* orientationData = OrientationData::getInstance();;
    

    BasicArrayList* inGameExclusiveOrientationSensorVector = new BasicArrayListD();;
    
inGameExclusiveOrientationSensorVector->add(SensorFeatureFactory::getInstance()->ORIENTATION_SENSORS);
    
inGameExclusiveOrientationSensorVector->add(SensorFeatureFactory::getInstance()->NO_ORIENTATION);
    
InGameFeatureChoiceGroups::getExclusiveInstance()->add(orientationData->ORIENTATION_SENSOR_INPUT, inGameExclusiveOrientationSensorVector);
    
}


    auto InGameFeatures::isAny() -> bool{

    Features* features = Features::getInstance();;
    

    TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory::getInstance();;
    

                        if(features->isFeature(touchFeatureFactory->SHOW_SCREEN_BUTTONS) || features->isFeature(touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS) || features->isFeature(touchFeatureFactory->HIDE_SCREEN_BUTTONS))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

    BasicArrayList* exclusiveOrientationSensorVector = dynamic_cast<BasicArrayList*>(GameFeatureChoiceGroups::getExclusiveInstance()->get()->get(OrientationData::getInstance()->ORIENTATION_SENSOR_INPUT));;
    

                        if(exclusiveOrientationSensorVector != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_CPP
