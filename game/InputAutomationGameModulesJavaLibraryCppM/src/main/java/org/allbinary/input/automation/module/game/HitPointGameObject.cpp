
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MeteredGameObject.h"
#include "HitPointGameObjectInterface.h"

class HitPointGameObject: public MeteredGameObject: public HitPointGameObjectInterface {
        

    private: damaged: bool = false;

    private: closeDeath: bool = false;

    private: const HP_LABEL: string = "HP: ";

    private: const IS_DAMAGED_LABEL: string = "isDamaged: ";

    private: const IS_CLOSE_DEATH_LABEL: string = "isCloseDeath: ";

public constructor (std::vector<BufferedImage> bufferedImage, Integer minX, Integer maxX, Integer y){
            super(bufferedImage, minX, maxX, y);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(this.getRatios()[bufferedImage!.length -1]!.doubleValue() < 1.0F)
                        
                                    {
                                    this.setDamaged(true);
    

                                    }
                                
                        else {
                            this.setDamaged(false);
    

                        }
                            

                        if(this.getRatios()[bufferedImage!.length -1]!.doubleValue() > 0.25F)
                        
                                    {
                                    this.closeDeath= false;
    

                                    }
                                
                        else {
                            this.closeDeath= true;
    

                        }
                            
}


    public bool isMoreThan(float aFloat){

                        if(this.getRatios()[this.getRatios()!.length -1]!.doubleValue() > aFloat)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public bool isCloseDeath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.closeDeath;
    
}


    setCloseDeath(bool closeDeath){
this.closeDeath= closeDeath;
    
}


    public bool isDamaged(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.damaged;
    
}


    public setDamaged(bool damaged){
this.damaged= damaged;
    
}


    public string toString(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.HP_LABEL);
    
stringBuffer!.append(super.toString());
    
stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(this.IS_DAMAGED_LABEL);
    
stringBuffer!.appendboolean(this.isDamaged());
    
stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(this.IS_CLOSE_DEATH_LABEL);
    
stringBuffer!.appendboolean(this.isCloseDeath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

