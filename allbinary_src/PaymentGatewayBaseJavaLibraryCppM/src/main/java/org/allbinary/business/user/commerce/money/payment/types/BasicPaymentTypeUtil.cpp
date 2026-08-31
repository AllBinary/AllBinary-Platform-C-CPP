
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPaymentType.h"

class BasicPaymentTypeUtil
            : public Object
         {
        

    private: static const instance: BasicPaymentTypeUtil = new BasicPaymentTypeUtil();

                    static int32_t initResult = BasicPaymentTypeUtil::init();
                static int32_t init() { 
                    


                    return 0;
                }
            
    public static BasicPaymentTypeUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicPaymentTypeUtil.instance;
    
}


private constructor (){

            super();
        }


    private: paymentTypeVector: Vector = new Vector();

    public add(BasicPaymentType paymentType){
this.paymentTypeVector!.add(paymentType);
    
}


                //@Throws(Exception.constructor)
            
    public BasicPaymentType get(string paymentTypeString){

    size: int32_t = this.paymentTypeVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    paymentType: BasicPaymentType = this.paymentTypeVector!.get(i) as BasicPaymentType;;
    

                        if(paymentType!.getName()!.compareTo(paymentTypeString) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentType;
    

                                    }
                                
}




                            throw new Exception("Unknown PaymentType: " +paymentTypeString);
                    
}


    public bool isContain(BasicPaymentType paymentType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paymentTypeVector!.contains(paymentType);;
    
}


    public Vector difference(Vector a_PaymentTypeVector){

    diff: Vector = new Vector();;
    

    size: int32_t = this.paymentTypeVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    paymentType: BasicPaymentType = this.paymentTypeVector!.get(i) as BasicPaymentType;;
    

                        if(!a_PaymentTypeVector!.contains(paymentType))
                        diff.add(paymentType)
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return diff;
    
}


};

            

