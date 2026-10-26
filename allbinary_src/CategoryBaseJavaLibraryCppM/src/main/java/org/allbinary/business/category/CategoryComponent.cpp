
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryView.h"
#include "CategoryInterface.h"

class CategoryComponent: public CategoryView, public TransformInterface {

public: CategoryComponent(CategoryInterface categoryInterface) : CategoryView(categoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NO_TYPE;
    
}


    public: TransformDocumentInterface getTransformDocumentInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void setTransformDocumentInterface(TransformDocumentInterface viewDocumentInterface){
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){

    Document document = DomDocumentHelper::create();;
    
document.appendChild(CategoryView(this->getCategoryInterface()).toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

