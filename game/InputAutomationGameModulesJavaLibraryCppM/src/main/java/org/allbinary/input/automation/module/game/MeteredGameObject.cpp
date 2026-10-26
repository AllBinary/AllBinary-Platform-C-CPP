
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MeteredGameObjectInterface.h"
#include "GraphicsAnalysisUtil.h"

class MeteredGameObject
            : public Object
        : public MeteredGameObjectInterface {

    private: std::vector<number> ratios;

    private: bool good = false;

    private: bool dropping = false;

    private: Integer minX;

    private: Integer maxX;

    private: Integer y;

    private: Integer size;

    private: const std::string RATIOS_LABEL = "Ratios: ";

    private: const std::string IS_GOOD_LABEL = "isGood: ";

    private: const std::string IS_DROPPPING_LABEL = "isDropping: ";

public: MeteredGameObject(std::vector<BufferedImage> bufferedImage, Integer minX, Integer maxX, Integer y){
this->setRatios(std::vector<Double>(bufferedImage.length));
    
this->setMinX(minX);
    
this->setMaxX(maxX);
    
this->setY(y);
    
this->setSize(maxX -minX);
    




                        for (
    int32_t index = 0;index < bufferedImage.size(); index++)
        {

    double nominator = GraphicsAnalysisUtil::getNominator(bufferedImage[index], this->getMinX(), this->getMaxX(), this->getY());;
    
this->getRatios()[index]= number(nominator /this->getSize());
    
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


    public: std::vector<number> getRatios(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ratios;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append(this->RATIOS_LABEL);
    




                        for (
    int32_t index = 0;index < this->getRatios().length; index++)
        {
stringBuffer.append(this->getRatios()[index].toString());
    

                        if(index < this->getRatios().length -1)
                        
                                    {
                                    stringBuffer.append(commonSeps.COMMA_SEP);
    

                                    }
                                
}

stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append(this->IS_GOOD_LABEL);
    
stringBuffer.appendboolean(this->isGood());
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append(this->IS_DROPPPING_LABEL);
    
stringBuffer.appendboolean(this->isDropping());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: void setRatios(std::vector<number> ratios){
this->ratios= ratios;
    
}


    public: Integer getMinX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minX;
    
}


    public: void setMinX(Integer minX){
this->minX= minX;
    
}


    public: Integer getMaxX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxX;
    
}


    public: void setMaxX(Integer maxX){
this->maxX= maxX;
    
}


    public: Integer getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->y;
    
}


    public: void setY(Integer y){
this->y= y;
    
}


    public: Integer getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->size;
    
}


    public: void setSize(Integer size){
this->size= size;
    
}


};

            

