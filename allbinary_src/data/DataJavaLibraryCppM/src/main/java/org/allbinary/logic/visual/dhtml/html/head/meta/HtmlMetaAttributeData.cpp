
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HtmlMetaAttributeData::HtmlMetaAttributeData(int32_t id, std::string value){
this->name= value;
    
this->id= id;
    
}


    auto HtmlMetaAttributeData::equals(HtmlMetaAttributeData* htmlMetaAttributeData) -> bool{

                        if(htmlMetaAttributeData->id == this->id)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto HtmlMetaAttributeData::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEDATA_CPP
