
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/game/MeteredGameObject.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/MeteredGameObjectInterface.h"
#include "org/allbinary/input/automation/module/game/GraphicsAnalysisUtil.h"


MeteredGameObject::MeteredGameObject(std::vector<BufferedImage*> bufferedImage, int32_t minX, int32_t maxX, int32_t y){
this->setRatios(std::vector<double>(bufferedImage.size()));
    
this->setMinX(minX);
    
this->setMaxX(maxX);
    
this->setY(y);
    
this->setSize(maxX -minX);
    




                        for (
    int32_t index = 0;index < bufferedImage.size(); index++)
        {

    double nominator = GraphicsAnalysisUtil::getNominator(bufferedImage[index], this->getMinX(), this->getMaxX(), this->getY());;
    
this->getRatios()[index]= double(nominator /this->getSize());
    
}


                        if(this->getRatios()[bufferedImage.size() -1].doubleValue() > 0.93F)
                        
                                    {
                                    this->setGood(true);
    

                                    }
                                
                        else {
                            this->setGood(false);
    

                        }
                            

                        if(this->getRatios()[bufferedImage.size() -1].doubleValue() < this->getRatios()[0].doubleValue())
                        
                                    {
                                    this->setDropping(true);
    

                                    }
                                
                        else {
                            this->setDropping(false);
    

                        }
                            
}


    auto MeteredGameObject::isGood() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->good;
    
}


    auto MeteredGameObject::setGood(bool good) -> void{
this->good= good;
    
}


    auto MeteredGameObject::isDropping() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dropping;
    
}


    auto MeteredGameObject::setDropping(bool dropping) -> void{
this->dropping= dropping;
    
}


    auto MeteredGameObject::getRatios() -> std::vector<double>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ratios;
    
}


    auto MeteredGameObject::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->RATIOS_LABEL);
    




                        for (
    int32_t index = 0;index < this->getRatios().size(); index++)
        {
stringBuffer->append(this->getRatios()[index].toString());
    

                        if(index < this->getRatios().size() -1)
                        
                                    {
                                    stringBuffer->append(commonSeps->COMMA_SEP);
    

                                    }
                                
}

stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->IS_GOOD_LABEL);
    
stringBuffer->appendboolean(this->isGood());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->IS_DROPPPING_LABEL);
    
stringBuffer->appendboolean(this->isDropping());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto MeteredGameObject::setRatios(std::vector<double> ratios) -> void{
this->ratios= ratios;
    
}


    auto MeteredGameObject::getMinX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minX;
    
}


    auto MeteredGameObject::setMinX(int32_t minX) -> void{
this->minX= minX;
    
}


    auto MeteredGameObject::getMaxX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxX;
    
}


    auto MeteredGameObject::setMaxX(int32_t maxX) -> void{
this->maxX= maxX;
    
}


    auto MeteredGameObject::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y;
    
}


    auto MeteredGameObject::setY(int32_t y) -> void{
this->y= y;
    
}


    auto MeteredGameObject::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->size;
    
}


    auto MeteredGameObject::setSize(int32_t size) -> void{
this->size= size;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_CPP
