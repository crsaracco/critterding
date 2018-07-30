#include "bodyphysics.h"

BePhysicsModel::BePhysicsModel( btDynamicsWorld*ownerWorld ) : m_ownerWorld(ownerWorld)
{
}

std::shared_ptr<BodypartRigidBox> BePhysicsModel::addBodyPart_Rigid_Box(const btVector3& dimensions, const btTransform& transform,  const float weight, const float linearDamping, const float angularDamping )
{
	std::shared_ptr<BodypartRigidBox> b = std::make_shared<BodypartRigidBox>(
		dimensions,
		m_ownerWorld,
		transform,
        weight,
        linearDamping,
        angularDamping
	);
	m_bodyparts.push_back( b );
	return b;
}

std::shared_ptr<BodypartRigidSphere> BePhysicsModel::addBodyPart_Rigid_Sphere(const float radius, const btTransform& transform,  const float weight, const float linearDamping, const float angularDamping)
{
	std::shared_ptr<BodypartRigidSphere> b = std::make_shared<BodypartRigidSphere>(
        radius,
        m_ownerWorld,
        transform,
        weight,
        linearDamping,
        angularDamping
    );
    m_bodyparts.push_back( b );
    return b;
}

std::shared_ptr<BodypartRigidCylinder> BePhysicsModel::addBodyPart_Rigid_Cylinder(const btVector3& dimensions, const btTransform& transform,  const float weight, const float linearDamping, const float angularDamping)
{
	std::shared_ptr<BodypartRigidCylinder> b = std::make_shared<BodypartRigidCylinder>(
		dimensions,
		m_ownerWorld,
		transform,
        weight,
        linearDamping,
        angularDamping
	);
	m_bodyparts.push_back( b );
	return b;
}

std::shared_ptr<BodypartRigidTrianglemesh> BePhysicsModel::addBodyPart_Rigid_Trianglemesh(const btVector3*const  gVertices, const unsigned int numVertices, int* const gVIndices, const unsigned int numVIndices, const btTransform& transform, const float weight, const float linearDamping, const float angularDamping )
{
	std::shared_ptr<BodypartRigidTrianglemesh> b = std::make_shared<BodypartRigidTrianglemesh>(
		gVertices, numVertices, gVIndices, numVIndices,
		m_ownerWorld,
		transform,
        weight,
        linearDamping,
        angularDamping
	);
	m_bodyparts.push_back( b );
	return b;
}

std::shared_ptr<BodypartRigidTrianglemesh> BePhysicsModel::addBodyPart_Rigid_Trianglemesh(std::shared_ptr<BeGeometry> model, const btTransform& transform, const float weight, const float linearDamping, const float angularDamping )
{
	std::shared_ptr<BodypartRigidTrianglemesh> b = std::make_shared<BodypartRigidTrianglemesh>(
		model,
		m_ownerWorld,
		transform,
        weight,
        linearDamping,
        angularDamping
	);
	m_bodyparts.push_back( b );
	return b;
}

std::shared_ptr<BodypartRigidConvexmesh> BePhysicsModel::addBodyPart_Rigid_Convexmesh(const btVector3* const gVertices, const unsigned int numVertices, int* const gVIndices, const unsigned int numVIndices, const btTransform& transform, const float weight, const float linearDamping, const float angularDamping )
{
    std::shared_ptr<BodypartRigidConvexmesh> b = std::make_shared<BodypartRigidConvexmesh>(
        gVertices, numVertices, gVIndices, numVIndices,
        m_ownerWorld,
        transform,
        weight,
        linearDamping,
        angularDamping
        );
    m_bodyparts.push_back( b );
    return b;
}

std::shared_ptr<BodypartRigidConvexmesh> BePhysicsModel::addBodyPart_Rigid_Convexmesh(std::shared_ptr<BeGeometry> model, const btTransform& transform,  const float weight, const float linearDamping, const float angularDamping)
{
    std::shared_ptr<BodypartRigidConvexmesh> b = std::make_shared<BodypartRigidConvexmesh>(
        model,
        m_ownerWorld,
        transform,
        weight,
        linearDamping,
        angularDamping
        );
    m_bodyparts.push_back( b );
    return b;
}

BePhysicsModel::~BePhysicsModel()
{
}
