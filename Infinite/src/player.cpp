#include "player.h"
#include "constants.h"
#include "common.h"
#include "meshRenderer.h"

using namespace Constant;

CPlayer::CPlayer() : m_Position(0.0f), m_MoveSpeed(0.0f), m_Radius(5)
{

}

CPlayer::~CPlayer()
{

}

//*********************************************************************************
//FUNCTION:
void CPlayer::moveUp()
{
	if (m_Position.y > WIN_HEIGHT)
		m_Position.y = WIN_HEIGHT;
	else
		m_Position.y += m_MoveSpeed;
}

//*********************************************************************************
//FUNCTION:
void CPlayer::moveDown()
{
	if (m_Position.y < 0)
		m_Position.y = 0;
	else
		m_Position.y -= m_MoveSpeed;
}

//*********************************************************************************
//FUNCTION:
void CPlayer::moveLeft()
{
	if (m_Position.x < 0)
		m_Position.x = 0;
	else
		m_Position.x -= m_MoveSpeed;
}

//*********************************************************************************
//FUNCTION:
void CPlayer::moveRight()
{
	if (m_Position.x > WIN_WIDTH)
		m_Position.x = WIN_WIDTH;
	else
		m_Position.x += m_MoveSpeed;
}