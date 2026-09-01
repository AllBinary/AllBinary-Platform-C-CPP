
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>

      
#include <org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/TouchFeatureFactory.h>

      
#include <org/allbinary/init/Init.h>

      
#include <org/allbinary/input/gyro/OrientationData.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InGameFeatures: public Init {

    public: void init(){

    std::string LABEL = "Screen Buttons";;
    

    OrientationData orientationData = OrientationData::getInstance();;
    

    BasicArrayList exclusiveOrientationSensorVector = GameFeatureChoiceGroups::getExclusiveInstance().get().get(orientationData.ORIENTATION_SENSOR_INPUT) as BasicArrayList;;
    

    InGameFeatureChoiceGroups inGameFeatureChoiceGroups = InGameFeatureChoiceGroups::getExclusiveInstance();;
    

                        if(exclusiveOrientationSensorVector != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* inGameExclusiveOrientationSensorVectorCanBeNull = inGameFeatureChoiceGroups.get().get(orientationData.ORIENTATION_SENSOR_INPUT);;
    

                        if(inGameExclusiveOrientationSensorVectorCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    this->addToInGameMenu();
    

                                    }
                                
                        else {
                            
    BasicArrayList inGameExclusiveOrientationSensorVector = inGameExclusiveOrientationSensorVectorCanBeNull as BasicArrayList;;
    

                        if(inGameExclusiveOrientationSensorVector.size() == 0)
                        
                                    {
                                    this->addToInGameMenu();
    

                                    }
                                

                        }
                            

                                    }
                                

    Features features = Features::getInstance();;
    

                        if(features.isFeature(TouchFeatureFactory::getInstance().SHOW_SCREEN_BUTTONS) || features.isFeature(TouchFeatureFactory::getInstance().AUTO_HIDE_SHOW_SCREEN_BUTTONS) || features.isFeature(TouchFeatureFactory::getInstance().HIDE_SCREEN_BUTTONS))
                        
                                    {
                                    
    BasicArrayList exclusiveScreenButtonsVector = BasicArrayListD();;
    

    TouchFeatureFactory touchFeatureFactory = TouchFeatureFactory::getInstance();;
    
exclusiveScreenButtonsVector.add(touchFeatureFactory.AUTO_HIDE_SHOW_SCREEN_BUTTONS);
    
exclusiveScreenButtonsVector.add(touchFeatureFactory.SHOW_SCREEN_BUTTONS);
    
exclusiveScreenButtonsVector.add(touchFeatureFactory.HIDE_SCREEN_BUTTONS);
    
inGameFeatureChoiceGroups.add(LABEL, exclusiveScreenButtonsVector);
    

                                    }
                                
}


    private: void addToInGameMenu(){

    OrientationData orientationData = OrientationData::getInstance();;
    

    BasicArrayList inGameExclusiveOrientationSensorVector = BasicArrayListD();;
    
inGameExclusiveOrientationSensorVector.add(SensorFeatureFactory::getInstance().ORIENTATION_SENSORS);
    
inGameExclusiveOrientationSensorVector.add(SensorFeatureFactory::getInstance().NO_ORIENTATION);
    
InGameFeatureChoiceGroups::getExclusiveInstance().add(orientationData.ORIENTATION_SENSOR_INPUT, inGameExclusiveOrientationSensorVector);
    
}


    public: bool isAny(){

    Features features = Features::getInstance();;
    

    TouchFeatureFactory touchFeatureFactory = TouchFeatureFactory::getInstance();;
    

                        if(features.isFeature(touchFeatureFactory.SHOW_SCREEN_BUTTONS) || features.isFeature(touchFeatureFactory.AUTO_HIDE_SHOW_SCREEN_BUTTONS) || features.isFeature(touchFeatureFactory.HIDE_SCREEN_BUTTONS))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

    BasicArrayList exclusiveOrientationSensorVector = GameFeatureChoiceGroups::getExclusiveInstance().get().get(OrientationData::getInstance().ORIENTATION_SENSOR_INPUT) as BasicArrayList;;
    

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


};

            

