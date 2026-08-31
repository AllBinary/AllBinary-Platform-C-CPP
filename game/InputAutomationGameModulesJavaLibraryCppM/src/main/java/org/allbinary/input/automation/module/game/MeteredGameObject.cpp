
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MeteredGameObjectInterface.h"
#include "GraphicsAnalysisUtil.h"

class MeteredGameObject
            : public Object
        : public MeteredGameObjectInterface {
        

    private: ratios: std::vector<number>;

    private: good: bool = false;

    private: dropping: bool = false;

    private: minX: Integer;

    private: maxX: Integer;

    private: y: Integer;

    private: size: Integer;

    private: const RATIOS_LABEL: string = "Ratios: ";

    private: const IS_GOOD_LABEL: string = "isGood: ";

    private: const IS_DROPPPING_LABEL: string = "isDropping: ";

public constructor (std::vector<BufferedImage> bufferedImage, Integer minX, Integer maxX, Integer y){

            super();
        this.setRatios(new Array(bufferedImage!.length));
    
this.setMinX(minX);
    
this.setMaxX(maxX);
    
this.setY(y);
    
this.setSize(maxX -minX);
    




                        for (
    index: int32_t = 0;index < bufferedImage!.length; index++)
        {

    nominator: double = GraphicsAnalysisUtil.getNominator(bufferedImage[index]!, this.getMinX(), this.getMaxX(), this.getY())!;;
    
this.getRatios()[index]= new number(nominator /this.getSize());
    
}


                        if(this.getRatios()[bufferedImage!.length -1]!.doubleValue() > 0.93F)
                        
                                    {
                                    this.setGood(true);
    

                                    }
                                
                        else {
                            this.setGood(false);
    

                        }
                            

                        if(this.getRatios()[bufferedImage!.length -1]!.doubleValue() < this.getRatios()[0]!.doubleValue())
                        
                                    {
                                    this.setDropping(true);
    

                                    }
                                
                        else {
                            this.setDropping(false);
    

                        }
                            
}


    public bool isGood(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.good;
    
}


    setGood(bool good){
this.good= good;
    
}


    public bool isDropping(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dropping;
    
}


    setDropping(bool dropping){
this.dropping= dropping;
    
}


    public std::vector<number> getRatios(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ratios;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    
stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(this.RATIOS_LABEL);
    




                        for (
    index: int32_t = 0;index < this.getRatios()!.length; index++)
        {
stringBuffer!.append(this.getRatios()[index]!.toString());
    

                        if(index < this.getRatios()!.length -1)
                        
                                    {
                                    stringBuffer!.append(commonSeps!.COMMA_SEP);
    

                                    }
                                
}

stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(this.IS_GOOD_LABEL);
    
stringBuffer!.appendboolean(this.isGood());
    
stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(this.IS_DROPPPING_LABEL);
    
stringBuffer!.appendboolean(this.isDropping());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public setRatios(std::vector<number> ratios){
this.ratios= ratios;
    
}


    public Integer getMinX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minX;
    
}


    public setMinX(Integer minX){
this.minX= minX;
    
}


    public Integer getMaxX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxX;
    
}


    public setMaxX(Integer maxX){
this.maxX= maxX;
    
}


    public Integer getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.y;
    
}


    public setY(Integer y){
this.y= y;
    
}


    public Integer getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.size;
    
}


    public setSize(Integer size){
this.size= size;
    
}


};

            

