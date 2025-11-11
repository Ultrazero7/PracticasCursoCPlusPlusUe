// Fill out your copyright notice in the Description page of Project Settings.


#include "AIClass_NPC.h"
#include "Class_NPC.h"

AAIClass_NPC::AAIClass_NPC(FObjectInitializer const& ObjectInitializer)
{

}


void AAIClass_NPC::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(AClass_NPC* const NPC = Cast<AClass_NPC>(InPawn))
		if (UBehaviorTree* const tree = NPC->GetBehaviorTree())
		{
			UBlackboardComponent* bloackboard;
			UseBlackboard(tree->BlackboardAsset, bloackboard);
			Blackboard = bloackboard;
			RunBehaviorTree(tree);
		}
}

