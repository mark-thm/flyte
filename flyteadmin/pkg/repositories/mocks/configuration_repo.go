package mocks

import (
	"context"

	"github.com/flyteorg/flyte/flyteadmin/pkg/repositories/interfaces"
	"github.com/flyteorg/flyte/flyteadmin/pkg/repositories/models"
)

type MockConfigurationRepo struct {
}

func (r *MockConfigurationRepo) GetActive(ctx context.Context) (models.ConfigurationDocument, error) {
	return models.ConfigurationDocument{}, nil
}

func (r *MockConfigurationRepo) EraseActiveAndCreate(ctx context.Context, versionToUpdate string, newConfiguration models.ConfigurationDocument) error {
	return nil
}

func NewMockConfigurationRepo() interfaces.ConfigurationDocumentRepoInterface {
	return &MockConfigurationRepo{}
}