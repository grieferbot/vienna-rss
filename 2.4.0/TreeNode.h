//
//  TreeNode.h
//  Vienna
//
//  Created by Steve on Sat Jan 31 2004.
//  Copyright (c) 2004-2005 Steve Palmer. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Cocoa/Cocoa.h>
#import "Folder.h"

@interface TreeNode : NSObject {
	TreeNode * parentNode;
	NSMutableArray * children;
	Folder * folder;
	int nodeId;
	BOOL canHaveChildren;
	
	NSProgressIndicator * progressIndicator;
}

// Accessor functions
-(id)init:(TreeNode *)parentNode atIndex:(int)insertIndex folder:(Folder *)folder canHaveChildren:(BOOL)childflag;
-(void)setParentNode:(TreeNode *)parent;
-(void)setFolder:(Folder *)newFolder;
-(TreeNode *)parentNode;
-(TreeNode *)nextSibling;
-(TreeNode *)firstChild;
-(void)addChild:(TreeNode *)child atIndex:(int)insertIndex;
-(void)removeChildren;
-(void)removeChild:(TreeNode *)child andChildren:(BOOL)removeChildrenFlag;
-(void)sortChildren:(int)sortMethod;
-(NSString *)nodeName;
-(TreeNode *)childByName:(NSString *)childName;
-(TreeNode *)childByIndex:(int)index;
-(int)indexOfChild:(TreeNode *)node;
-(TreeNode *)nodeFromID:(int)n;
-(Folder *)folder;
-(int)nodeId;
-(void)setNodeId:(int)n;
-(int)countOfChildren;
-(void)setCanHaveChildren:(BOOL)childflag;
-(BOOL)canHaveChildren;
-(NSComparisonResult)folderNameCompare:(TreeNode *)otherObject;
@end