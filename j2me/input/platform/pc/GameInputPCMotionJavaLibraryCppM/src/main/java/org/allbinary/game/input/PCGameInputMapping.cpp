
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PCGAMEINPUTMAPPING_CPP
        #define ORG_ALLBINARY_GAME_INPUT_PCGAMEINPUTMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/PCGameInputMapping.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/input/motion/button/BasicTouchInputFactory.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PCKeyFactory.h"
#include "org/allbinary/game/input/Input.h"


PCGameInputMapping::PCGameInputMapping() : PersistentInputMapping(GamePersistanceStrings::getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto PCGameInputMapping::init(AbeClientInformationInterface* abeClientInformation) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->INIT);
    
PCKeyFactory::getInstance();
    
TouchMotionGestureFactory::getInstance();
    
TrackballMotionGestureFactory::getInstance();
    
BasicTouchInputFactory::getInstance();
    
PersistentInputMapping::init(abeClientInformation);
    

                        if(this->getTotalMapped() == 0 || this->isDefaultNew())
                        
                                    {
                                    this->getInputMapping()->addMapping(this->getDefault());
    
this->save(abeClientInformation);
    

                                    }
                                
}


    auto PCGameInputMapping::isDelete(Input* input) -> bool{

                        if(input == PCKeyFactory::getInstance()->DEL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto PCGameInputMapping::isSystemInput(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_PCGAMEINPUTMAPPING_CPP
