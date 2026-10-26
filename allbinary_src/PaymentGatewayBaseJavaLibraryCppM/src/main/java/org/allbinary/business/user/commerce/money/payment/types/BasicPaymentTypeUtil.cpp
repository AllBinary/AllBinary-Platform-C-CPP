
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPaymentType.h"

class BasicPaymentTypeUtil
            : public Object
         {

    private: static BasicPaymentTypeUtil instance() { return BasicPaymentTypeUtil(); }

                    static int32_t initResult = BasicPaymentTypeUtil::init();
                static int32_t init() { 
                    


                    return 0;
                }
            
    public: static BasicPaymentTypeUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicPaymentTypeUtil::instance();
    
}


private: BasicPaymentTypeUtil(){
}


    private: BasicArrayList paymentTypeVector = BasicArrayListD();

    public: void add(BasicPaymentType paymentType){
this->paymentTypeVector.add(paymentType);
    
}


                //@Throws(Exception.constructor)
            
    public: BasicPaymentType get(std::string paymentTypeString){

    int32_t size = this->paymentTypeVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    BasicPaymentType paymentType = this->paymentTypeVector.get(i);;
    

                        if(paymentType.getName().compareTo(paymentTypeString) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentType;
    

                                    }
                                
}




                            throw Exception("Unknown PaymentType: " +paymentTypeString);
                    
}


    public: bool isContain(BasicPaymentType paymentType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentTypeVector.contains(paymentType);;
    
}


    public: BasicArrayList difference(BasicArrayList a_PaymentTypeVector){

    BasicArrayList diff = BasicArrayListD();;
    

    int32_t size = this->paymentTypeVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    BasicPaymentType paymentType = this->paymentTypeVector.get(i);;
    

                        if(!a_PaymentTypeVector.contains(paymentType))
                        diff.add(paymentType);
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return diff;
    
}


};

            

