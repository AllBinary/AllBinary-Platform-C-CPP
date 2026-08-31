
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HelperTag.h"

class ParentInventoryTagHelper
            : public Object
         {
        

    private: static const instance: ParentInventoryTagHelper = new ParentInventoryTagHelper();

    public static ParentInventoryTagHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ParentInventoryTagHelper.instance;
    
}


                //@Throws(Exception.constructor)
            
    public isValid(any = {} tagClass, Tag parentTag){

                        if(parentTag == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Must have parent tag.");
                    

                                    }
                                
                             else 
                        if(!(parentTag instanceof HelperTag))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Must have at least a ");
    
stringBuffer!.append("tags.HelperTag");
    
stringBuffer!.append(" as parent");
    
stringBuffer!.append("and not: ");
    
stringBuffer!.append(parentTag!.constructor.name.toString()!);
    



                            throw new Exception(stringBuffer!.toString());
                    

                                    }
                                
}


};

            

