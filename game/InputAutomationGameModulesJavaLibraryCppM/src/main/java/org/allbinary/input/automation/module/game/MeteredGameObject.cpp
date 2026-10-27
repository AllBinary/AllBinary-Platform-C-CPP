
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

class MeteredGameObject
            : public Object
        , public MeteredGameObjectInterface {

    private: std::vector<double> ratios;

    private: bool good = false;

    private: bool dropping = false;

    private: int32_t minX;

    private: int32_t maxX;

    private: int32_t y;

    private: int32_t size;

    private: const std::string RATIOS_LABEL = "Ratios: ";

    private: const std::string IS_GOOD_LABEL = "isGood: ";

    private: const std::string IS_DROPPPING_LABEL = "isDropping: ";

public: MeteredGameObject(std::vector<BufferedImage*> bufferedImage, int32_t minX, int32_t maxX, int32_t y){
this->setRatios(std::vector<double>(bufferedImage.length));
    
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


    public: bool isGood(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->good;
    
}


    protected: void setGood(bool good){
this->good= good;
    
}


    public: bool isDropping(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dropping;
    
}


    protected: void setDropping(bool dropping){
this->dropping= dropping;
    
}


    public: std::vector<double> getRatios(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ratios;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->RATIOS_LABEL);
    




                        for (
    int32_t index = 0;index < this->getRatios().length; index++)
        {
stringBuffer->append(this->getRatios()[index].toString());
    

                        if(index < this->getRatios().length -1)
                        
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


    public: void setRatios(std::vector<double> ratios){
this->ratios= ratios;
    
}


    public: int32_t getMinX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minX;
    
}


    public: void setMinX(int32_t minX){
this->minX= minX;
    
}


    public: int32_t getMaxX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxX;
    
}


    public: void setMaxX(int32_t maxX){
this->maxX= maxX;
    
}


    public: int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->y;
    
}


    public: void setY(int32_t y){
this->y= y;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->size;
    
}


    public: void setSize(int32_t size){
this->size= size;
    
}


};

            

