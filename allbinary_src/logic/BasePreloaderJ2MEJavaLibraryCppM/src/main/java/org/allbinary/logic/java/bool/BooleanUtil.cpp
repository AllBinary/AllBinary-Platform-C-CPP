
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
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BooleanFactory.h"

class BooleanUtil
            : public Object
         {

    private: static BooleanUtil instance() { return BooleanUtil(); }

    public: static BooleanUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanUtil::instance();
    
}


    private: const TsUtil tsUtil = TsUtil::getInstance();

private: BooleanUtil(){
}


                //@Throws(Exception.constructor)
            
    public: bool getFromString(std::string booleanString){

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

    BooleanFactory booleanFactory = BooleanFactory::getInstance();;
    

                        if(stringValidationUtil.isEmpty(booleanString))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    std::string booleanStringLowerCase = booleanString.toLowerCase();;
    

                        if(this->tsUtil.compareTo(booleanStringLowerCase, booleanFactory.TRUE_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(booleanStringLowerCase, booleanFactory.FALSE_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                            throw Exception("Invalid booleanString - Must be true or false");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: bool isStringBoolean(std::string booleanString){

    BooleanFactory booleanFactory = BooleanFactory::getInstance();;
    

    std::string booleanStringLowerCase = booleanString.toLowerCase();;
    

                        if(booleanStringLowerCase.compareTo(booleanFactory.TRUE_STRING) == 0 || booleanStringLowerCase.compareTo(booleanFactory.FALSE_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toStringFromBooleanArray(std::vector<bool> booleanArray){

    StringMaker stringMaker = StringMaker();;
    

    int32_t size = booleanArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringMaker.appendboolean(booleanArray[index]!);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker.toString();;
    
}


};

            

