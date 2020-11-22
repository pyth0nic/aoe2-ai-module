#pragma once
#include <vector>
#include <stdint.h>

#include "misc/Configuration.h"

class ExpertFact
{
public:
	static void UpdateAddresses();

	static int AttackSoldierCount();
	static int AttackWarboatCount();
	static bool BuildingAvailable(int buildingType);
	static int BuildingCount();
	static int BuildingCountTotal();
	static int BuildingTypeCount(int buildingType);
	static int BuildingTypeCountTotal(int buildingType);
	static bool CanAffordBuilding(int buildingType);
	static bool CanAffordCompleteWall(int perimeter, int wallType);
	static bool CanAffordResearch(int researchType);
	static bool CanAffordUnit(int unitType);
	static bool CanBuild(int buildingType);
	static bool CanBuildGate(int perimeter);
	static bool CanBuildGateWithEscrow(int perimeter);
	static bool CanBuildWall(int perimeter, int wallType);
	static bool CanBuildWallWithEscrow(int perimeter, int wallType);
	static bool CanBuildWithEscrow(int buildingType);
	static bool CanBuyCommodity(int commodityType);
	static bool CanResearch(int researchType);
	static bool CanResearchWithEscrow(int researchType);
	static bool CanSellCommodity(int commodityType);
	static bool CanSpy();
	static bool CanSpyWithEscrow();
	static bool CanTrain(int unitType);
	static bool CanTrainWithEscrow(int unitType);
	static int CcPlayersBuildingCount(int playerNumber);
	static int CcPlayersBuildingTypeCount(int playerNumber, int buildingType);
	static int CcPlayersUnitCount(int playerNumber);
	static int CcPlayersUnitTypeCount(int playerNumber, int unitType);
	static bool CheatsEnabled();
	static bool CivSelected(int civ);
	static int CivilianPopulation();
	static int CommodityBuyingPrice(int commodityType);
	static int CommoditySellingPrice(int commodityType);
	static int CurrentAge();
	static int CurrentAgeTime();
	static int CurrentScore();
	static bool DeathMatchGame();
	static int DefendSoldierCount();
	static int DefendWarboatCount();
	static int Difficulty();
	static bool Doctrine(int value);
	static int DropsiteMinDistance(int resourceType);
	static bool EnemyBuildingsInTown();
	static bool EnemyCapturedRelics();
	static int EscrowAmount(int resourceType);
	static bool EventDetected(int eventType, int id);
	static bool False();
	static int FoodAmount();
	static int GameTime();
	static int GameType();
	static int GateCount(int perimeter);
	static int Goal(int goalId);
	static std::vector<int> Goals();
	static int GoldAmount();
	static bool HoldKohRuin();
	static bool HoldRelics();
	static int HousingHeadroom();
	static int IdleFarmCount();
	static bool MapSize(int mapSize);
	static bool MapType(int mapType);
	static int MilitaryPopulation();
	static bool PlayerComputer(int playerNumber);
	static bool PlayerHuman(int playerNumber);
	static bool PlayerInGame(int playerNumber);
	static bool PlayerNumber(int playerNumber);
	static bool PlayerResigned(int playerNumber);
	static bool PlayerValid(int playerNumber);
	static bool PlayersAchievements(int param1, int param2, int param3, int param4);
	static int PlayersBuildingCount(int playerNumber);
	static int PlayersBuildingTypeCount(int playerNumber, int buildingType);
	static bool PlayersCiv(int playerNumber);
	static int PlayersCivilianPopulation(int playerNumber);
	static int PlayersCurrentAge(int playerNumber);
	static int PlayersCurrentAgeTime(int playerNumber);
	static int PlayersMilitaryPopulation(int playerNumber);
	static int PlayersPopulation(int playerNumber);
	static int PlayersScore(int playerNumber);
	static bool PlayersStance(int playerNumber, int stance);
	static int PlayersTribute(int playerNumber, int resourceType);
	static int PlayersTributeMemory(int playerNumber, int resourceType);
	static int PlayersUnitCount(int playerNumber);
	static int PlayersUnitTypeCount(int playerNumber, int unitType);
	static int Population();
	static int PopulationCap();
	static int PopulationHeadroom();
	static int RandomNumber();
	static bool RegicideGame();
	static bool ResearchAvailable(int researchType);
	static bool ResearchCompleted(int researchType);
	static bool ResourceFound(int resourceType);
	static bool SharedGoal(int goalId, int value);
	static bool SheepAndForageTooFar();
	static int SoldierCount();
	static bool StanceToward(int playerNumber, int stance);
	static int StartingAge();
	static int StartingResources();
	static int StoneAmount();
	static int StrategicNumber(int strategicNumber);
	static bool TauntDetected(int playerNumber, int tauntId);
	static bool TimerTriggered(int timerId);
	static bool TownUnderAttack();
	static bool TraceFact(int param);
	static bool True();
	static bool UnitAvailable(int unitType);
	static int UnitCount();
	static int UnitCountTotal();
	static int UnitTypeCount(int unitType);
	static int UnitTypeCountTotal(int unitType);
	static int UpAlliedGoal(int computerAlly, int goalId);
	static int UpAlliedResourceAmount(int ally, int resourceAmount);
	static int UpAlliedResourcePercent(int ally, int resourceAmount);
	static int UpAlliedSn(int computerAlly, int snId);
	static int UpAttackerClass();
	static int UpBuildingTypeInTown(int typeOp, int buildingId);
	static bool UpCanBuild(int escrowState, int typeOp, int buildingId);
	static bool UpCanBuildLine(int escrowState, int goalPoint, int typeOp, int buildingId);
	static bool UpCanResearch(int escrowState, int typeOp, int techId);
	static bool UpCanSearch(int searchSource);
	static bool UpCanTrain(int escrowState, int typeOp, int unitId);
	static int UpDefenderCount();
	static int UpEnemyBuildingsInTown();
	static int UpEnemyUnitsInTown();
	static int UpEnemyVillagersInTown();
	static int UpGaiaTypeCount(int typeOp, int resource);
	static int UpGaiaTypeCountTotal(int typeOp, int resource);
	static int UpGetFact(int factId, int factParam);
	static int UpGetPlayerFact(int player, int factId, int param);
	static int UpGroupSize(int typeOp, int groupId);
	static int UpIdleUnitCount(int idleType);
	static int UpObjectData(int objectData);
	static int UpObjectTargetData(int objectData);
	static int UpObjectTypeCount(int typeOp, int objectId);
	static int UpObjectTypeCountTotal(int typeOp, int objectId);
	static int UpPathDistance(int goalPoint, int strict);
	static int UpPendingObjects(int typeOp, int objectId);
	static bool UpPendingPlacement(int typeOp, int buildingId);
	static int UpPlayerDistance(int player);
	static int UpPlayersInGame(int playerStance);
	static bool UpPointContains(int goalPoint, int typeOp, int objectId);
	static int UpPointDistance(int goalPoint1, int goalPoint2);
	static int UpPointElevation(int goalPoint);
	static int UpPointExplored(int goalPoint);
	static int UpPointTerrain(int goalPoint);
	static int UpPointZone(int goalPoint);
	static int UpProjectileDetected(int projectileType);
	static int UpProjectileTarget(int projectileType);
	static int UpRemainingBoarAmount();
	static int UpResearchStatus(int typeOp, int techId);
	static int UpResourceAmount(int resourceAmount);
	static int UpResourcePercent(int resourceAmount);
	static int UpTimerStatus(int timerId);
	static bool UpTrainSiteReady(int typeOp, int unitId);
	static int UpUnitTypeInTown(int typeOp, int unitId);
	static int UpVillagerTypeInTown(int typeOp, int unitId);
	static bool VictoryCondition(int victoryCondition);
	static int WallCompletedPercentage(int perimeter);
	static int WallInvisiblePercentage(int perimeter);
	static int WarboatCount();
	static int WoodAmount();
#if defined GAME_DE
	static int EndingAge();
	static bool FeCanBuildAtPoint(int param1, int param2, int param3, int param4);
	static int FeSubGameType();
#elif defined GAME_AOC

#endif

	inline static int lastRelOpValue = 0;

private:
	ExpertFact() {};

	// params might need reviewing
	inline static intptr_t(*FuncBuildingAvailable)(int buildingType) = 0;
	inline static intptr_t(*FuncCanAffordBuilding)(int buildingType) = 0;
	inline static intptr_t(*FuncCanAffordCompleteWall)(int perimeter, int wallType) = 0;
	inline static intptr_t(*FuncCanAffordResearch)(int researchType) = 0;
	inline static intptr_t(*FuncCanAffordUnit)(int unitType) = 0;
	inline static intptr_t(*FuncCanBuild)(int buildingType) = 0;
	inline static intptr_t(*FuncCanBuildGate)(int perimeter) = 0;
	inline static intptr_t(*FuncCanBuildGateWithEscrow)(int perimeter) = 0;
	inline static intptr_t(*FuncCanBuildWall)(int perimeter, int wallType) = 0;
	inline static intptr_t(*FuncCanBuildWallWithEscrow)(int perimeter, int wallType) = 0;
	inline static intptr_t(*FuncCanBuildWithEscrow)(int buildingType) = 0;
	inline static intptr_t(*FuncCanBuyCommodity)(int commodityType) = 0;
	inline static intptr_t(*FuncCanResearch)(int researchType) = 0;
	inline static intptr_t(*FuncCanResearchWithEscrow)(int researchType) = 0;
	inline static intptr_t(*FuncCanSellCommodity)(int commodityType) = 0;
	inline static intptr_t(*FuncCanSpy)() = 0;
	inline static intptr_t(*FuncCanSpyWithEscrow)() = 0;
	inline static intptr_t(*FuncCanTrain)(int unitType) = 0;
	inline static intptr_t(*FuncCanTrainWithEscrow)(int unitType) = 0;
	inline static intptr_t(*FuncCcPlayersBuildingCount)(int playerNumber, int relOp, int value) = 0;
	inline static intptr_t(*FuncCcPlayersBuildingTypeCount)(int playerNumber, int buildingType, int relOp, int value) = 0;
	inline static intptr_t(*FuncCcPlayersUnitCount)(int playerNumber, int relOp, int value) = 0;
	inline static intptr_t(*FuncCcPlayersUnitTypeCount)(int playerNumber, int unitType, int relOp, int value) = 0;
	inline static intptr_t(*FuncCheatsEnabled)() = 0;
	inline static intptr_t(*FuncCivSelected)(int civ) = 0;
	inline static intptr_t(*FuncDeathMatchGame)() = 0;
	inline static intptr_t(*FuncDoctrine)(int value) = 0;
	inline static intptr_t(*FuncEnemyBuildingsInTown)() = 0;
	inline static intptr_t(*FuncEnemyCapturedRelics)() = 0;
	inline static intptr_t(*FuncEventDetected)(int eventType, int id) = 0;
	inline static intptr_t(*FuncFalse)() = 0;
	inline static intptr_t(*FuncGameType)(int relOp, int value) = 0;
	inline static intptr_t(*FuncHoldKohRuin)() = 0;
	inline static intptr_t(*FuncHoldRelics)() = 0;
	inline static intptr_t(*FuncMapSize)(int mapSize) = 0;
	inline static intptr_t(*FuncMapType)(int mapType) = 0;
	inline static intptr_t(*FuncPlayerComputer)(int playerNumber) = 0;
	inline static intptr_t(*FuncPlayerHuman)(int playerNumber) = 0;
	inline static intptr_t(*FuncPlayerInGame)(int playerNumber) = 0;
	inline static intptr_t(*FuncPlayerNumber)(int playerNumber) = 0;
	inline static intptr_t(*FuncPlayerResigned)(int playerNumber) = 0;
	inline static intptr_t(*FuncPlayerValid)(int playerNumber) = 0;
	inline static intptr_t(*FuncPlayersAchievements)(int param1, int param2, int param3, int param4) = 0;
	inline static intptr_t(*FuncPlayersCiv)(int playerNumber) = 0;
	inline static intptr_t(*FuncPlayersStance)(int playerNumber, int stance) = 0;
	inline static intptr_t(*FuncRegicideGame)() = 0;
	inline static intptr_t(*FuncResearchAvailable)(int researchType) = 0;
	inline static intptr_t(*FuncResearchCompleted)(int researchType) = 0;
	inline static intptr_t(*FuncResourceFound)(int resourceType) = 0;
	inline static intptr_t(*FuncSharedGoal)(int goalId, int value) = 0;
	inline static intptr_t(*FuncSheepAndForageTooFar)() = 0;
	inline static intptr_t(*FuncStanceToward)(int playerNumber, int stance) = 0;
	inline static intptr_t(*FuncTauntDetected)(int playerNumber, int tauntId) = 0;
	inline static intptr_t(*FuncTimerTriggered)(int timerId) = 0;
	inline static intptr_t(*FuncTownUnderAttack)() = 0;
	inline static intptr_t(*FuncTraceFact)(int param) = 0;
	inline static intptr_t(*FuncTrue)() = 0;
	inline static intptr_t(*FuncUnitAvailable)(int unitType) = 0;

	inline static intptr_t(*FuncUpAlliedGoal)(int computerAlly, int goalId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpAlliedResourceAmount)(int ally, int resourceAmount, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpAlliedResourcePercent)(int ally, int resourceAmount, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpAlliedSn)(int computerAlly, int snId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpAttackerClass)(int relOp, int value) = 0;
	inline static intptr_t(*FuncUpBuildingTypeInTown)(int typeOp, int buildingId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpCanBuild)(int escrowState, int typeOp, int buildingId) = 0;
	inline static intptr_t(*FuncUpCanBuildLine)(int escrowState, int goalPoint, int typeOp, int buildingId) = 0;
	inline static intptr_t(*FuncUpCanResearch)(int escrowState, int typeOp, int techId) = 0;
	inline static intptr_t(*FuncUpCanSearch)(int searchSource) = 0;
	inline static intptr_t(*FuncUpCanTrain)(int escrowState, int typeOp, int unitId) = 0;
	inline static intptr_t(*FuncUpCompareGoal)(int goalId, int compareOp, int value) = 0;
	inline static intptr_t(*FuncUpDefenderCount)(int relOp, int value) = 0;
	inline static intptr_t(*FuncUpEnemyBuildingsInTown)(int relOp, int value) = 0;
	inline static intptr_t(*FuncUpEnemyUnitsInTown)(int relOp, int value) = 0;
	inline static intptr_t(*FuncUpEnemyVillagersInTown)(int relOp, int value) = 0;
	inline static intptr_t(*FuncUpGaiaTypeCount)(int typeOp, int resource, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpGaiaTypeCountTotal)(int typeOp, int resource, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpGroupSize)(int typeOp, int groupId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpIdleUnitCount)(int idleType, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpObjectData)(int objectData, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpObjectTargetData)(int objectData, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpObjectTypeCount)(int typeOp, int objectId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpObjectTypeCountTotal)(int typeOp, int objectId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPathDistance)(int goalPoint, int strict, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPendingObjects)(int typeOp, int objectId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPendingPlacement)(int typeOp, int buildingId) = 0;
	inline static intptr_t(*FuncUpPlayerDistance)(int player, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPlayersInGame)(int playerStance, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPointContains)(int goalPoint, int typeOp, int objectId) = 0;
	inline static intptr_t(*FuncUpPointDistance)(int goalPoint1, int goalPoint2, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPointElevation)(int goalPoint, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPointExplored)(int goalPoint, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPointTerrain)(int goalPoint, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpPointZone)(int goalPoint, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpProjectileDetected)(int projectileType, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpProjectileTarget)(int projectileType, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpRemainingBoarAmount)(int relOp, int value) = 0;
	inline static intptr_t(*FuncUpResearchStatus)(int typeOp, int techId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpResourceAmount)(int resourceAmount, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpResourcePercent)(int resourceAmount, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpTimerStatus)(int timerId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpTrainSiteReady)(int typeOp, int unitId) = 0;
	inline static intptr_t(*FuncUpUnitTypeInTown)(int typeOp, int unitId, int relOp, int value) = 0;
	inline static intptr_t(*FuncUpVillagerTypeInTown)(int typeOp, int unitId, int relOp, int value) = 0;
	inline static intptr_t(*FuncVictoryCondition)(int victoryCondition) = 0;
	inline static intptr_t(*FuncWallCompletedPercentage)(int perimeter, int relOp, int value) = 0;
	inline static intptr_t(*FuncWallInvisiblePercentage)(int perimeter, int relOp, int value) = 0;
#if defined GAME_DE
	inline static intptr_t(*FuncBuildingCountTotal)(int relOp, int value) = 0;
	inline static intptr_t(*FuncDifficulty)(int relOp, int value) = 0;
	inline static intptr_t(*FuncEndingAge)(int relOp, int value) = 0;
	inline static intptr_t(*FuncFeCanBuildAtPoint)(int param1, int param2, int param3, int param4) = 0;
	inline static intptr_t(*FuncFeSubGameType)(int relOp, int value) = 0;
	inline static intptr_t(*FuncGateCount)(int perimeter, int relOp, int value) = 0;
	inline static intptr_t(*FuncStartingAge)(int relOp, int value) = 0;
	inline static intptr_t(*FuncStartingResources)(int relOp, int value) = 0;
	inline static intptr_t(*FuncStrategicNumber)(int strategicNumber, int relOp, int value) = 0;
	inline static intptr_t(*FuncUnitCountTotal)(int relOp, int value) = 0;
#elif defined GAME_AOC
	inline static intptr_t(__thiscall* FuncInternalGetGoal)(void* informationAI, int goalId) = 0;
	inline static intptr_t(__thiscall* FuncInternalGameType)(void* baseGame) = 0;
	inline static intptr_t(__thiscall* FuncInternalGetGateCount)(void* informationAI, int perimeter) = 0;
	inline static intptr_t(__thiscall* FuncInternalStrategicNumber)(void* tacticalAI, int snId) = 0;
#endif
};
