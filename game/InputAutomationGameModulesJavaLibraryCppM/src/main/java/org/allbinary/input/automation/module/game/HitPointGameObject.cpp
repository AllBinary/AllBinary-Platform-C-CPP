
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_HITPOINTGAMEOBJECT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_HITPOINTGAMEOBJECT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/game/HitPointGameObject.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/MeteredGameObject.h"
#include "org/allbinary/input/automation/module/game/HitPointGameObjectInterface.h"


HitPointGameObject::HitPointGameObject(std::vector<BufferedImage*> bufferedImage, int32_t minX, int32_t maxX, int32_t y) : MeteredGameObject(bufferedImage, minX, maxX, y){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(this->getRatios()[bufferedImage.size() -1].doubleValue() < 1.0F)
                        
                                    {
                                    this->setDamaged(true);
    

                                    }
                                
                        else {
                            this->setDamaged(false);
    

                        }
                            

                        if(this->getRatios()[bufferedImage.size() -1].doubleValue() > 0.25F)
                        
                                    {
                                    this->closeDeath= false;
    

                                    }
                                
                        else {
                            this->closeDeath= true;
    

                        }
                            
}


    auto HitPointGameObject::isMoreThan(float aFloat) -> bool{

                        if(this->getRatios()[this->getRatios()->length -1].doubleValue() > aFloat)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto HitPointGameObject::isCloseDeath() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->closeDeath;
    
}


    auto HitPointGameObject::setCloseDeath(bool closeDeath) -> void{
this->closeDeath= closeDeath;
    
}


    auto HitPointGameObject::isDamaged() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->damaged;
    
}


    auto HitPointGameObject::setDamaged(bool damaged) -> void{
this->damaged= damaged;
    
}


    auto HitPointGameObject::toString() -> std::string{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->HP_LABEL);
    
stringBuffer->append(MeteredGameObject::toString());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->IS_DAMAGED_LABEL);
    
stringBuffer->appendboolean(this->isDamaged());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->IS_CLOSE_DEATH_LABEL);
    
stringBuffer->appendboolean(this->isCloseDeath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_HITPOINTGAMEOBJECT_CPP
