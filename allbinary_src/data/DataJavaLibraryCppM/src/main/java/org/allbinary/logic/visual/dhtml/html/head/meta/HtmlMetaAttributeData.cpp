
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlMetaAttributeData
            : public Object
         {
        

    private: id: int32_t;

    private: name: string;

public constructor (int32_t id, string value){

            super();
        this.name= value;
    
this.id= id;
    
}


    public bool equals(HtmlMetaAttributeData htmlMetaAttributeData){

                        if(htmlMetaAttributeData!.id == this.id)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

