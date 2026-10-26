
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BooleanFactory
            : public Object
         {

    private: static BooleanFactory instance() { return BooleanFactory(); }

    public: static BooleanFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::instance();
    
}


    public: const Boolean TRUE = true;

    public: const Boolean FALSE = false;

    public: const std::string TRUE_STRING = this->TRUE.toString();

    public: const std::string FALSE_STRING = this->FALSE.toString();

    public: const std::string YES = "yes";

    public: const std::string NO = "no";

    public: std::string toStringb(bool bool_){

                        if(bool_)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->TRUE_STRING;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->FALSE_STRING;
    

                        }
                            
}


};

            

